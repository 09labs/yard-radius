/* $Id: acconfig.h,v 1.3 2000/12/04 09:24:09 kiavik Exp $ */

/* define if shadowing password support should be enclosed */
#undef SHADOW_PASSWORD

/* define if shadowing password expiration should be enclosed */
#undef SHADOW_EXPIRATION

/* define if ActiveCard support should be enclosed */
#undef ACTIVCARD

/* define if SecureID support should be enclosed */
#undef SECUREID

/* define if IPass support should be enclosed */
#undef IPASS

/* define if VPORTS support should be enclosed */
#undef VPORTS

/* define to do not use local (v)snprintf */
#undef USE_PORTABLE_SNPRINTF

/* define if pam_strerror() has just one arg */
#undef OLD_PAM

/* define if you want to activate PAM support and your system support PAM */
#undef PAM
