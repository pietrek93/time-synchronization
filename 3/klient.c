#include <rpc/rpc.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "ser.h"

int main() {

	char host[]="localhost";
	CLIENT *kl;

	long zegar=0;
	long i=0;

	long *wynik;
	par a;

	kl=clnt_create(host,SYNCHRONIZACJA,VER1,"tcp");

	if (kl==NULL ) {perror("blad serwera"); exit(0);}
	printf("polaczony z serwerem %s\n",host);

	

	while(i<20){
	zegar= zegar + 1.0;
	i++;
	printf("polaczony z serwerem %ld\n",zegar);
	/*if (i/10){
		
	a.a=zegar;
	printf("test1");
	czas_lokalny_1(&a,kl);
	printf("test2");
	wynik=pobierz_czas_1(NULL,kl);
	printf("test3");
	if (wynik>zegar) zegar=wynik+1;	
	printf("test4");	
	}*/
	
	}
	char host2[]="192.168.1.58";
	CLIENT *c1;

	c1=clnt_create(host2,SYNCHRONIZACJA,VER1,"tcp");

	if (c1==NULL ) {perror("blad serwera"); exit(0);}
	printf("polaczony z serwerem %s\n",host2);
	
	wynik=czas_1(NULL,c1);
	
	
	printf("wynik:%ld", *wynik);
	if (*wynik>zegar) zegar=*wynik+1;	
	printf("zegar wynosi: %ld", zegar);

	
return 0;
}
