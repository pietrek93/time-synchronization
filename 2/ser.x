/*  ser.x */
struct arg{
long a;
long b;
};

typedef struct arg par;

program SYNCHRONIZACJA {

    version   VER1 {
	void czas_lokalny(par)=1;
	long pobierz_czas(void)=2; 
	void zapisz_czas(par)=3; 
	
	} =1; 

} = 0x20000001; 
