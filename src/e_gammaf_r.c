/* e_gammaf_r.c -- float version of e_gamma_r.c.
 * Conversion to float by Ian Lance Taylor, Cygnus Support, ian@cygnus.com.
 */

/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */

#include "cdefs-compat.h"
//__FBSDID("$FreeBSD: src/lib/msun/src/e_gammaf_r.c,v 1.8 2008/02/22 02:30:35 das Exp $");

/* __ieee754_gammaf_r(x, signgamp)
 * Reentrant version of the logarithm of the Gamma function
 * with user provide pointer for the sign of Gamma(x).
 *
 * Method: See __ieee754_lgammaf_r
 */

#include <openlibm_math.h>

#include "math_private.h"

DLLEXPORT float
__ieee754_gammaf_r(float x, int *signgamp)
{
	return __ieee754_lgammaf_r(x,signgamp);
}
