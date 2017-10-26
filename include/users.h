#ifndef __USERS_H
#define __USERS_H
/*
 * Copyright (C) 1999-2002, Francesco P. Lovergine. All rights reserved,
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms stated in the LICENSE file which should be
 * enclosed with sources.
 */

/* $Id: users.h,v 1.3 2002/03/05 19:17:57 kiavik Exp $ */

#include <sys/types.h>
#if defined(HAVE_FCNTL_H)
#include <fcntl.h>
#endif
#include <gdbm.h>

typedef union {
	GDBM_FILE gdbm;
	FILE *flat;
} USER_FILE;

#endif
