#include <rpc/rpc.h> 
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "ser.h"

long zegar;



void* czas_lokalny_1_svc (par *a, struct svc_req * r) {
		
		static long  wynik=0;
		wynik=a->a;
		zegar=wynik; 
		printf("zegar=%ld\n", zegar);
			
	}

long* pobierz_czas_1_svc (void *p, struct svc_req * r) {

		static long  wynik;
		wynik=zegar;
		return &wynik;

	}

void* zapisz_czas_1_svc (par *a, struct svc_req * r) {
		static long  wynik;
		wynik=a->b;
		zegar=wynik;
		return &wynik;
	}

