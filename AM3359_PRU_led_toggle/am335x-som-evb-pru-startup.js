/*
 *
 * Copyright (C) 2015 Texas Instruments Incorporated - http://www.ti.com/ 
 * 
 * 
 *  Redistribution and use in source and binary forms, with or without 
 *  modification, are permitted provided that the following conditions 
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright 
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the 
 *    documentation and/or other materials provided with the   
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/


//----------------------------------------------------------------------------
// Purpose: Prepare the AM335x SOC so CCS can connect to the PRU as if it were
// any other standalone CPU.  
//
// This script is only intended to be used as described in 
// http://processors.wiki.ti.com/index.php/PRU-ICSS_Debug_on_AM335x
// In particular, it does NOT WORK as a standalone script.  
//
// Presumptions:
// - Target system is AM3359-SOM-EVB-IND
// - The target configuration has launched
// - PRU connection occurs after this script runs
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// Constants
//----------------------------------------------------------------------------
var AM335X_INPUT_EN   = 1 << 5;
var AM335X_PULL_DISA  = 1 << 3;
var AM335X_PIN_OUTPUT = AM335X_PULL_DISA;
var AM335X_PIN_INPUT  = AM335X_INPUT_EN | AM335X_PULL_DISA;

//----------------------------------------------------------------------------
// Invoke the main function in this file
//----------------------------------------------------------------------------
startup_pru();

//****************************************************************************
// STARTUP_PRU
//****************************************************************************
function startup_pru()
{
   var errCode = 0;

   //-------------------------------------------------------------------------
   // Import the DSS packages into our namespace to save on typing
   //-------------------------------------------------------------------------
   importPackage(Packages.com.ti.debug.engine.scripting);
   importPackage(Packages.com.ti.ccstudio.scripting.environment);
   importPackage(Packages.java.lang);

   //-------------------------------------------------------------------------
   // Create our scripting environment object - which is the main entry
   // point into any script and the factory for creating other Scriptable
   // servers and Sessions
   //-------------------------------------------------------------------------
   script = ScriptingEnvironment.instance();

   //-------------------------------------------------------------------------
   // Get the Debug Server and start a Debug Session
   //-------------------------------------------------------------------------
   debugServer = script.getServer("DebugServer.1");

   //-------------------------------------------------------------------------
   // Open a session on the Debug Access Port (DAP)
   //-------------------------------------------------------------------------
   
   var deviceCCXMLFile = 'targetConfigs/BeagleBone_Black.ccxml';
   debugServer.setConfig( deviceCCXMLFile );
   var debugSessionDAP = debugServer.openSession("*", "CS_DAP_DebugSS");

   //-------------------------------------------------------------------------
   // Connect to the DAP.  Error check.
   //-------------------------------------------------------------------------
   print("Connecting to DAP");
   try
   {
      debugSessionDAP.target.connect();
   }
   catch (ex)
   {
      throw "Aborting!";
   }

   //-------------------------------------------------------------------------
   // Init steps for PRU carried out by the DAP
   //-------------------------------------------------------------------------
   print("Enabling JTAG clock");
   debugSessionDAP.expression.evaluate(
      "*((unsigned int*) 0x44e00414 ) |= 0x02;");

   print("Configuring PRU pins");
   PRU_PINMUX_Config(debugSessionDAP.memory);
   
   print("Enabling ICSS clock");
   debugSessionDAP.expression.evaluate(
      "*((unsigned int*) 0x44e00140 ) = 0x02;");
   debugSessionDAP.expression.evaluate(
      "*((unsigned int*) 0x44E000E8 ) = 0x02;");

   print("Resetting ICSS");
   debugSessionDAP.expression.evaluate(
      "*((unsigned int*) 0x44E00C00 ) |= 0x2;");
   debugSessionDAP.expression.evaluate(
      "*((unsigned int*) 0x44E00C00 ) &= ~0x2;");

   print("Done");

   // Load the program on PRU_0, and set it running
   var programToLoad = "Debug/AM3359_PRU_led_toggle.out";

   var debugSessionPRU_0 = debugServer.openSession("*", "PRU_0");

   print("Connecting to PRU_0");
   try
   {
      debugSessionPRU_0.target.connect();
   }
   catch (ex)
   {
      throw "Aborting!";
   }

   try {
   debugSessionPRU_0.memory.loadProgram( programToLoad );  // <<<<<<<<<<<<<<<<<<<<  LOAD
   } catch (ex) {
     script.traceWrite("loadProgram failed: " + ex);
   }
   debugSessionPRU_0.target.runAsynch();
   print("PRU_0 running");
}

//****************************************************************************
// PRU_PINMUX_Config
//****************************************************************************
function PRU_PINMUX_Config(dsDAP_mem)
{
   // GEL_TextOut("****** PRU Cape GPI/O PINMUX is being configured  ***** \n","Output",1,1,1);

   //-------------------------------------------------------------------------
   // LEDS
   //-------------------------------------------------------------------------
   //green led1  = pru0 r30_4  ARM pin b12
   dsDAP_mem.writeData(0, 0x44e109a0, AM335X_PIN_OUTPUT | 5, 32); //mode 5

   //red led2  = pru0 r30_6  ARM pin d13
   dsDAP_mem.writeData(0, 0x44e109a8, AM335X_PIN_OUTPUT | 5, 32); //mode 5

   //yellow led3  = pru0 r30_7  ARM pin a14
   dsDAP_mem.writeData(0, 0x44e109ac, AM335X_PIN_OUTPUT | 5, 32); //mode 5
}
