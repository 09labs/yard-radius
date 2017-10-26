/*
 * Copyright (C) 1999-2002 Francesco P. Lovergine. 
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms stated in the LICENSE file which should be
 * enclosed with sources.
 */

static char rcsid[] = "$Id: version.c,v 1.3 2002/03/05 19:17:57 kiavik Exp $";

#include "yard.h"
#include "global.h"
#include "hostinfo.h"

/*  If you make any changes to this software please update this version number
 */

#define	 STRVER "%s : YARD Radius Server %s $Date: 2002/03/05 19:17:57 $ "

/*************************************************************************
 *
 *	Function: version
 *
 *	Purpose: Display the revision number for this program
 *
 *************************************************************************/

void version(void)
{
	char	buffer[1024];

	build_version(buffer);
	fprintf(stderr, buffer);
	exit(-1);
}

void log_version()
{
	char buffer[1024];

	build_version(buffer);
	log_info("%s",buffer);
}

void build_version(char *bp)
{
	sprintf(bp, STRVER, progname, VERSION);

	/* here are all the conditional feature flags */

# if defined(ACTIVCARD)
	strcat(bp," ACTIVCARD");
# endif

# if defined(IPASS)
	strcat(bp," IPASS");
# endif

# if defined(SECURID)
	strcat(bp," SECURID");
# endif

#if defined(SHADOW_PASSWORD)
	strcat(bp," SHADOW");	/* system has no /usr/include/shadow.h */
#endif

	/* here are all the system definitions compilation uses */

	strcat(bp," "); strcat(bp,HOSTINFO);
	if (accept_zero) {
		strcat(bp, " zero_accepted");
	}
	strcat(bp, radius_gdbm ? " gdbm_users" : " flat_users");
	strcat(bp,"\n");
}
