/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SER_H_RPCGEN
#define _SER_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct arg {
	long a;
	long b;
};
typedef struct arg arg;

typedef arg par;

#define SYNCHRONIZACJA 0x20000001
#define VER1 1

#if defined(__STDC__) || defined(__cplusplus)
#define czas_lokalny 1
extern  void * czas_lokalny_1(par *, CLIENT *);
extern  void * czas_lokalny_1_svc(par *, struct svc_req *);
#define pobierz_czas 2
extern  long * pobierz_czas_1(void *, CLIENT *);
extern  long * pobierz_czas_1_svc(void *, struct svc_req *);
#define zapisz_czas 3
extern  void * zapisz_czas_1(par *, CLIENT *);
extern  void * zapisz_czas_1_svc(par *, struct svc_req *);
extern int synchronizacja_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define czas_lokalny 1
extern  void * czas_lokalny_1();
extern  void * czas_lokalny_1_svc();
#define pobierz_czas 2
extern  long * pobierz_czas_1();
extern  long * pobierz_czas_1_svc();
#define zapisz_czas 3
extern  void * zapisz_czas_1();
extern  void * zapisz_czas_1_svc();
extern int synchronizacja_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_arg (XDR *, arg*);
extern  bool_t xdr_par (XDR *, par*);

#else /* K&R C */
extern bool_t xdr_arg ();
extern bool_t xdr_par ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SER_H_RPCGEN */
