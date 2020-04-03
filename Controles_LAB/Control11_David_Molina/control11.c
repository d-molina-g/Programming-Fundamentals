#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int suma(int a, int b);
int resta (int a, int b);

int main(){
int funcion=0;



//abrir numeros.txt
FILE * numeros;
numeros = fopen("numeros.txt","r");

if( numeros == NULL ){
printf("Problemas con lectura de archivo\n");
exit(-1);
}

int cont=0,tamano_f=0;
char c;

//LARGO FILAS MATRIZ
while (c!=EOF){    //hasta el final del archivo, se suma la cantidad de espacios.

if((c=fgetc(numeros))=='\n'){
tamano_f++;

}

}
//printf("cantidad de filas en matriz= %d\n",tamano_f);
//................................................
fclose(numeros);

FILE * numeros2; 
numeros2=fopen("numeros.txt","r"); 

if( numeros2 == NULL ){
printf("Problemas con lectura de archivo\n");
exit(-1);
}

//MATRIZ
int A[tamano_f][2];
int z=0,i=0,j=0;
z=0;
for (i=0;i<tamano_f;i++){
 for (j=0; j<2;j++){
fscanf(numeros2,"%d",&z);
A[i][j]=z;

}
}


//ARREGLO

int R[tamano_f];
//inicializar arreglo
for (i=0;i<tamano_f;i++){
R[i]=0;
}


for (i=0;i<tamano_f;i++){
R[i]=suma(A[i][0],A[i][1]);

}

/*
printf("\n");
for (i=0;i<tamano_f;i++){
printf("%d \n",R[i]);
}
*/

//INGRESAMOS DATOS ..................
printf("Escoja Funcion 1.Suma 2.Resta\n");
scanf("%d",&funcion);



if (funcion==1){
for (i=0;i<tamano_f;i++){
R[i]=suma(A[i][0],A[i][1]);

}

}

if (funcion==2){
for (i=0;i<tamano_f;i++){
R[i]=resta(A[i][0],A[i][1]);

}
}

if (funcion!=1 && funcion!=2){
printf("Ingrese Opcion Correctamente\n");
}




int num=0;
printf("Ingrese numero a buscar: \n");
scanf("%d",&num);


//SALIDA
FILE * salida;
salida = fopen("salida.txt","w");

//CALCULO DEL MENOR

int R_aux=0;
for (i=0;i<tamano_f;i++){
for (i=0;i<tamano_f;i++){
if (R[i]>R[i+1]){
R_aux=R[i];
R[i]=R[i+1];
R[i+1]=R_aux;
}

}
}

//BUSCAR NUMERO y POSICION DE ÉL
for (i=0;i<tamano_f;i++){  
if (R[i]==num){
printf("El número %d está en la posición %d\n",num,i);
}

}

/* R ORDENADO
for (i=0;i<tamano_f;i++){
printf("%d \n",R[i]);
}
*/





for (i=0;i<tamano_f;i++){

fprintf(salida, "%d ",R[i]);
fprintf(salida, "\n");
}




 //cierre de archivos
fclose(numeros2);
fclose(salida);













return 0;
}

int suma(int a, int b){
int suma=0;

suma=a+b;

return suma;
}

int resta(int a, int b){
int resta=0;

resta=a-b;

return resta;
}









