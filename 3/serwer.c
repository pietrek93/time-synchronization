#include <rpc/rpc.h> 
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "ser.h"

long zegar;

long* czas_1_svc (void *p, struct svc_req * r){
		
		static long  wynik;
		wynik=zegar;
		printf("zegar=%ld\n", zegar);
		return &wynik;

	}


void* czas_lokalny_1_svc (par *a, struct svc_req * r) {
		
		static long  wynik=0;
		wynik=a->a;
		zegar=wynik; 
		printf("zegar=%ld\n", zegar);
			
	}

long* pobierz_czas_1_svc (void *p, struct svc_req * r) {

		static long  *wynik;
		
	
		/*char host[]="192.168.1.58";
		CLIENT *kl;

		kl=clnt_create(host,SYNCHRONIZACJA,VER1,"tcp");

		if (kl==NULL ) {perror("blad serwera"); exit(0);}
		printf("polaczony z serwerem %s\n",host);
		printf("zegar: %ld\n",zegar);
		wynik=czas_1(NULL,kl);
		//printf("czas innego procesu %ld\n",wynik);*/
		return wynik;

	}

