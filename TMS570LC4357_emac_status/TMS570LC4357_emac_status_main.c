
#include <HL_emac.h>
#include <HL_hw_emac.h>
#include <stddef.h>
#include <stdio.h>

#include <assert.h>


static void sendRecv(void);

/**
 * main.c
 */
int main(void)
{
    uint32_t channel;
    const uint32_t ERROR_MASK =
            (0xF    << 20)
        |   (0x7    << 16)
        |   (0xF    << 12)
        |   (0x7    << 8);

    // initialize the EMAC
    EMACInit(EMAC_CTRL_0_BASE, EMAC_0_BASE);
    MDIOInit(MDIO_0_BASE, MDIO_FREQ_INPUT, MDIO_FREQ_OUTPUT);
    EMACRxBroadCastEnable(EMAC_0_BASE, 0);
    EMACRxMultiCastEnable(EMAC_0_BASE, 0);
    uint8_t macaddr[6] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05};
    EMACFrameEnable(EMAC_0_BASE, macaddr);
    EMACMACSrcAddrSet(EMAC_0_BASE, macaddr);
    for(channel=0; channel < 8; ++channel)
        EMACMACAddrSet(EMAC_0_BASE, channel, macaddr, EMAC_MACADDR_MATCH);
    EMACRxUnicastSet(EMAC_0_BASE, 0);
    EMACTxEnable(EMAC_0_BASE);
    EMACRxEnable(EMAC_0_BASE);
    EMACEnableLoopback(EMAC_0_BASE);   // LOOPBACK MODE!!
    EMACMIIEnable(EMAC_0_BASE);

    while(true) {
        sendRecv();

        const uint32_t status = HWREG(EMAC_0_BASE + EMAC_MACSTATUS);
        //const uint32_t txerrcode = (status & EMAC_MACSTATUS_TXERRCODE) >> EMAC_MACSTATUS_TXERRCODE_SHIFT;
        //const uint32_t rxerrcode = (status & EMAC_MACSTATUS_RXERRCODE) >> EMAC_MACSTATUS_RXERRCODE_SHIFT;
        assert(0 == (ERROR_MASK & status));
        //assert(0 == rxerrcode);
        //assert(0 == txerrcode);
    }

	return 0;
}

uint32_t rx_status_counts[2][2];
uint32_t tx_status_counts[2][2];
volatile uint32_t num_rx_starts;
volatile uint32_t num_tx_starts;

emac_rx_bd_t* descriptors = (emac_rx_bd_t*)(EMAC_CTRL_RAM_0_BASE);
size_t const rxchain_count = 10;
emac_rx_bd_t* const pRxchain = (emac_rx_bd_t*)EMAC_CTRL_RAM_0_BASE;
emac_tx_bd_t* const pTxchain = ((emac_tx_bd_t*)EMAC_CTRL_RAM_0_BASE) + rxchain_count;

uint8_t rxBuffer[1500];
uint8_t txBuffer[64] =
{
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x08, 0x06,
//  ^- destintation MAC -------------^  ^- source MAC -------------------^  ^-Ethertype `IP`
    0x00, 0x01, 0x08, 0x00, 0x06, 0x04, 0x00, 0x01,
//  ^- htype -^ ^- ptype -^ ^hlen ^plen ^- operation `request`
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 192, 168, 9, 1,
//  ^- sha --------------------------^  ^- spa --------^
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 192, 168, 9, 100
//  ^- tha --------------------------^  ^- tpa ------^ 
};

static inline uint32_t htole32(uint32_t value)
{
    // asm(" REV32 r0, r0");
    return
        (((uint32_t)(value) & (uint32_t)0xFF000000UL) >> 24U) |
        (((uint32_t)(value) & (uint32_t)0x00FF0000UL) >>  8U) |
        (((uint32_t)(value) & (uint32_t)0x0000FF00UL) <<  8U) |
        (((uint32_t)(value) & (uint32_t)0x000000FFUL) << 24U);
}


static void createRxChain(void)
{
    int count;
    emac_rx_bd_t template;
    template.next = 0;
    template.bufptr = htole32((uint32_t)rxBuffer);
    template.bufoff_len = htole32(sizeof(rxBuffer));
    template.flags_pktlen = htole32(EMAC_BUF_DESC_OWNER);

    for(count=0; count < rxchain_count; ++count)
    {
        descriptors[count] = template;
        if(count > 0)
            descriptors[count - 1].next = (emac_rx_bd_t*)htole32((uint32_t)&(descriptors[count]));
    }

    HWREG(EMAC_0_BASE + EMAC_RXHDP(0)) = (uint32_t)descriptors;
}


static inline void sampleEmacStatus (const bool sample_a_first,
                                     const volatile uint32_t *const in_a, const volatile uint32_t *const in_b,
                                     uint32_t *const out_a, uint32_t *const out_b)
{
    if (sample_a_first)
    {
        *out_a = *in_a;
        *out_b = *in_b;
    }
    else
    {
        *out_b = *in_b;
        *out_a = *in_a;
    }
}


static void sendRecv(void)
{
    uint32_t flags_pktlen;
    uint32_t hdp;
    bool eoq_set;
    bool hdp_null;
    static bool sample_eoq_first = true;
    static bool first_rx = true;
    static bool first_tx = true;

    sampleEmacStatus (sample_eoq_first,
                      &pRxchain[rxchain_count - 1].flags_pktlen, (volatile uint32_t *) (EMAC_0_BASE + EMAC_RXHDP(0)),
                      &flags_pktlen, &hdp);
    hdp_null = hdp == 0;
    flags_pktlen = htole32 (flags_pktlen);
    eoq_set = (EMAC_BUF_DESC_EOQ & flags_pktlen) != 0;
    if((eoq_set || first_rx) && hdp_null)
    {
        createRxChain();
        first_rx = false;
        num_rx_starts++;
    }
    rx_status_counts[eoq_set][hdp_null]++;

    sampleEmacStatus (sample_eoq_first,
                      &pTxchain[0].flags_pktlen, (volatile uint32_t *) (EMAC_0_BASE + EMAC_TXHDP(0)),
                      &flags_pktlen, &hdp);
    hdp_null = hdp == 0;
    flags_pktlen = htole32 (flags_pktlen);
    eoq_set = (EMAC_BUF_DESC_EOQ & flags_pktlen) != 0;
    if((eoq_set || first_tx) && hdp_null)
    {
        pTxchain[0].next = 0;
        pTxchain[0].bufptr = htole32((uint32_t)txBuffer);
        pTxchain[0].bufoff_len = htole32(sizeof(txBuffer));
        pTxchain[0].flags_pktlen = htole32(sizeof(txBuffer) | EMAC_BUF_DESC_SOP | EMAC_BUF_DESC_EOP | EMAC_BUF_DESC_OWNER);

        HWREG(EMAC_0_BASE + EMAC_TXHDP(0)) = (uint32_t)pTxchain;
        first_tx = false;
        num_tx_starts++;
    }
    tx_status_counts[eoq_set][hdp_null]++;
    sample_eoq_first = !sample_eoq_first;
}
