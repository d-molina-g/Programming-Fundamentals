#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

char ruta[]="entrada.in";
char ruta_salida[]="salida.out";
FILE * archivo;
archivo = fopen(ruta,"r");
if( archivo == NULL ){
		printf("Problemas con lectura de archivo\n");
		exit(-1);
	}

char encriptado[100];

//asignamos el mensaje a encriptado desde archivo
fgets(encriptado, 100 , archivo) ;

printf("cadena = %s\n",encriptado);

char desifrado[100];
int i=0;

//recorremos el arreglo encriptado
for (i=0; i<=strlen(encriptado);i++){

		desifrado[i]=encriptado[i]+3;

}

printf("el mensaje desifrado es: %s\n",desifrado);

fclose(archivo);

//el mensaje desifrado lo guardamos en ruta_salida="salida.out"
FILE * archivo2;
archivo2=fopen(ruta_salida,"w");

fputs(desifrado , archivo2);
fclose(archivo2);


return 0;
}


