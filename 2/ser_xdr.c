/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "ser.h"

bool_t
xdr_arg (XDR *xdrs, arg *objp)
{
	register int32_t *buf;

	 if (!xdr_long (xdrs, &objp->a))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->b))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_par (XDR *xdrs, par *objp)
{
	register int32_t *buf;

	 if (!xdr_arg (xdrs, objp))
		 return FALSE;
	return TRUE;
}
