#include <rpc/rpc.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include "ser.h"

int main() {

	char host[]="localhost";
	CLIENT *kl;
	
	char host2[]="192.168.1.58";
	CLIENT *c1;

	char host3[]="192.168.1.59";
	
	srand(time(0));
	long zegar=0;
	long i=0;
	long reszta;
	int losowanie;

	long *wynik;
	par a;

	kl=clnt_create(host,SYNCHRONIZACJA,VER1,"tcp");

	if (kl==NULL ) {perror("blad serwera"); exit(0);}
	printf("polaczony z serwerem: %s\n",host);

	

	while(1){
	zegar= zegar + 1.0;
	a.a=zegar;
	czas_lokalny_1(&a,kl);
	i++;
	reszta=i%500000;
	if (reszta==0){
		
		c1=clnt_create(host2,SYNCHRONIZACJA,VER1,"tcp");

		if (c1==NULL ) {perror("blad serwera"); exit(0);}
		printf("Sprawdzam czas %s\n",host2);
	
		wynik=pobierz_czas_1(NULL,c1);
		clnt_destroy(c1);
		
		if (*wynik>zegar) 
		{
		zegar=*wynik+1;
		a.b=zegar;
		losowanie=rand()%2;
			
			if (losowanie==0){
				c1=clnt_create(host2,SYNCHRONIZACJA,VER1,"tcp");
				if (c1==NULL ) {perror("blad serwera"); exit(0);}
				printf("Synchronizuje czas z serwerem %s\n",host2);
				zapisz_czas_1(&a,c1);
				clnt_destroy(c1);
				}
			else{
				c1=clnt_create(host3,SYNCHRONIZACJA,VER1,"tcp");
				if (c1==NULL ) {perror("blad serwera"); exit(0);}
				printf("Synchronizuje czas z serwerem %s\n",host3);
				zapisz_czas_1(&a,c1);
				clnt_destroy(c1);
				}
		
		}
	}

}	
return 0;
}
