#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

char comparador,cambiador;
char x[80];
char y[10]="salir";
int retorno;
int cont=0;
int i;





char palabras[512]="";
char nueva_palabra[512]="";

printf("Ingrese el comparador:\n");
scanf("%c",&comparador);



while (retorno!=0){

printf("Ingrese palabra, para salir escriba 'salir':\n");
scanf("%s",x);
retorno = strcmp(x,y);
if (retorno!=0){

//concatenar
strcat (palabras,x);

retorno = strcmp(x,y);
}
}

//asignarle el largo de caracteres a 'largo'
int largo=strlen(palabras);


//suma sub-indices
for (i=0;i<=largo;i++){
if (palabras[i]==comparador){
cont=i+cont;
}

}


//Condicion de la suma de sub-indices
if (cont<33){
cont=33;
}
if (cont>126){
cont=126;
}

//cast a cont //Cambiador
cambiador=(char)cont;

//cambiar a cambiador(ASCII) por comparador(LETRA)
strcpy(nueva_palabra,palabras);
for (i=0;i<=largo;i++){
if (nueva_palabra[i]==comparador){
nueva_palabra[i]=cambiador;
}
}


//puntero a archivo
char ruta[]="salida.txt";
FILE * archivo;
archivo = fopen("salida.txt","w");



//imprimir valores en archivo 'salida.txt'.

fprintf(archivo, "CADENA CONCATENADA  %s\n",palabras);
fprintf(archivo, "COMPARADOR  %c\n",comparador);
fprintf(archivo, "CAMBIADOR  %c\n",cambiador);
fprintf(archivo, "CADENA MODIFICADA  %s",nueva_palabra);



fclose(archivo);


//printf("%s\n",nueva_palabra);



return 0;


}
