## $Id: Makefile.am,v 1.14 2002/03/02 17:15:10 kiavik Exp $
##
## Submit this file to automake --add-missing --copy
##

AUTOMAKE_OPTIONS=foreign

TAR=gtar
INSTALL=@INSTALL@

SUBDIRS=src conf pam doc logs man

DIST_CONF = conf/clients.example conf/config.aeg.example conf/dictionary \
	    conf/proxy.example conf/radwatch.conf.example conf/users.example \
            conf/menus/menu1 conf/menus/menu2 conf/denyuser.example \
	    conf/allowuser.example \
	    conf/Makefile.am conf/menus/Makefile.am 

DIST_PAM = pam/Makefile.am pam/Makefile-linux pam/pam.conf pam/pam_radius_session.c pam/README pam/current-draft.txt

DIST_DOC = doc/rfc/rfc1157.txt doc/rfc/rfc2618.txt \
	   doc/rfc/rfc2619.txt doc/rfc/rfc2620.txt \
	   doc/rfc/rfc2621.txt doc/rfc/rfc2865.txt \
	   doc/rfc/rfc2866.txt doc/rfc/rfc2867.txt \
	   doc/rfc/rfc2868.txt doc/rfc/rfc2869.txt \
	   doc/rfc/rfc2882.txt \
	   doc/txt/PAM-INFO \
	   doc/Makefile.am doc/txt/Makefile.am doc/rfc/Makefile.am

DIST_LOGS = logs/README logs/Makefile.am

DIST_INCLUDE = include/activcard.h include/aegapi.h include/global.h \
	       include/md5.h include/prototypes.h include/radius.h \
	       include/users.h include/vports.h include/yard.h

DIST_MAN = man/radiusd.8.man man/builddbm.8.man man/md5test.1.man man/radlast.1.man \
	    man/radlist.1.man man/radtest.1.man man/radwatch.8.man \
	    man/radiusd_attributes.5.man man/radiusd_pam.7.man

EXTRA_DIST = ChangeLog CREDITS INSTALL \
	     install-sh LICENSE.LUCENT LICENSE Makefile Makefile.am Makefile.in missing \
	     mkinstalldirs README README.LUCENT shtool TODO VERSION \
	     changeprefix PGP-KEY \
	     $(DIST_CONF) $(DIST_PAM) $(DIST_DOC) $(DIST_INCLUDE) $(DIST_MAN)


distclean-local:
	-rm -f $(srcdir)/default-paths.h $(srcdir)/hostinfo.h
	-rm -f $(srcdir)/man/*.[12345678]
