#define MAINPREFIX z
#define PREFIX sil_stalker
#define SUBPREFIX addons

#define AUTHOR "Silence"

#define DOUBLES(var1,var2) ##var1##_##var2
#define QUOTE(var1) #var1
#define COMPONENT_NAME QUOTE(PREFIX - COMPONENT)
#define JOIN(var1,var2) ##var1## - ##var2
#define JOINQUOTE(var1,var2) QUOTE(JOIN(var1,var2))

#define MOD_CONSTANT PREFIX
#define MOD(var1) DOUBLES(MOD_CONSTANT,var1)

#define ADDON DOUBLES(PREFIX,COMPONENT)

#define PATHTOFOLDER_SYS(var1,var2,var3) \MAINPREFIX\##var1\SUBPREFIX\##var2\##var3
#define PATHTOFOLDER(var1) PATHTOFOLDER_SYS(PREFIX,COMPONENT,var1)
#define QPATHTOFOLDER(var1) QUOTE(PATHTOFOLDER(var1))
#define QPATHTOFOLDER_SYS(var1,var2) QUOTE(PATHTOFOLDER_SYS(PREFIX,var1,var2))

#define LOGO logo_menu_ca.paa
#define SPOTLIGHTLOGO QPATHTOFOLDER(LOGO)

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCH
#define VERSION_AR MAJOR,MINOR,PATCH

#define VERSION_CONFIG version = VERSION; versionStr = QUOTE(VERSION); versionAr[] = {VERSION_AR}

#define REQUIRED_VERSION 1.0.0