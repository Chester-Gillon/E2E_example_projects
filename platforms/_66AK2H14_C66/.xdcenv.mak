#
_XDCBUILDCOUNT = 1
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/bios_6_50_01_12/packages
override XDCROOT = C:/ti/ccs740/xdctools_3_50_04_40_core_eng
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/bios_6_50_01_12/packages;C:/ti/ccs740/xdctools_3_50_04_40_core_eng/packages;..
HOSTOS = Windows
endif
