/*  ser.x */
struct arg{
long a;
long b;
};

typedef struct arg par;

program SYNCHRONIZACJA {

    version   VER1 {
	long czas(void)=1;
	void czas_lokalny(par)=2;
	long pobierz_czas(void)=3; 
	
	} =1; 

} = 0x20000001; 
