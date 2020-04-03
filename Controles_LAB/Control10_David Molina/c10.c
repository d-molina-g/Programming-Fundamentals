#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int ** generarMatriz(int columnas[], int filas);

int main(){

//abrir entrada 2
FILE * entrada;
entrada = fopen("entrada.log","r");

if( entrada == NULL ){
printf("Problemas con lectura de archivo\n");
exit(-1);
}

char f,c;
int cont=0;
int tamano_f=0,tamano_c=0;

//LARGO FILAS MATRIZ
while ((f=fgetc(entrada))!='\n'){
cont++;
}
tamano_f=cont-(cont/2);

printf("cantidad de filas en matriz= %d\n",tamano_f);



//LARGO COLUMNAS MATRIZ
while (c!=EOF){    //hasta el final del archivo, se suma la cantidad de espacios.

if((c=fgetc(entrada))=='\n'){
tamano_c++;

}

}
tamano_c=tamano_c+1; //añadir el salto de linea ultima fila

printf("cantidad de columnas en matriz= %d\n",tamano_c);

fclose(entrada);

FILE * entradax; 
entradax=fopen("entrada.log","r"); 

if( entradax == NULL ){
printf("Problemas con lectura de archivo\n");
exit(-1);
}




//CONSTRUIMOS LA MATRIZ (ESTATICA)
int A[tamano_f][tamano_c];
int z=0,i=0,j=0;
z=0;
for (i=0;i<tamano_f;i++){
 for (j=0; j<tamano_c;j++){
fscanf(entradax,"%d",&z);

A[i][j]=z;

}
}


//IMPRIMIR MATRIZ 

for (i=0;i<tamano_f;i++){
 for (j=0; j<tamano_c;j++){
printf("%d ",A[i][j]);
}
printf("\n");
}



//NUMERO REPETIDO
int num[100],p=0,contz=0,cont_aux=0,repetido=0;
for (p=0;p<=9;p++){

for (i=0;i<tamano_f;i++){
 for (j=0; j<tamano_c;j++){
if(p==A[i][j]){
contz++;
}
}
}
if (contz>cont_aux){
cont_aux=contz;
//printf("%d\n",cont_aux);
repetido=p;
}

contz=0;
}


printf("repetido = %d",repetido);



//NUMERO DE COLUMNAS por FILAS (despues de eliminar numero repetido).
int columnas[tamano_c];

cont=0;
for (i=0;i<tamano_f;i++){
 for (j=0; j<tamano_c;j++){

if (A[i][j]==repetido){
cont++;
}
}
columnas[i]=10-cont;
cont=0;
}

//IMPRIMIR VALORES DE CADA FILA
printf("\n");
for (i=0;i<tamano_f;i++){
printf("Fila[%d]= %d\n",i,columnas[i]);
}
//MATRIZ DINAMICA
 
int **matriz; //matriz dinamica


matriz=generarMatriz(columnas,tamano_f); //LLamada a funcion.

//DATOS DE MATRIZ ESTATICA A DINAMICA
for (i=0;i<tamano_f;i++){
 for (j=0;j<tamano_c;j++){
matriz[i][j]=A[i][j];
}
}


//ESCRITURA DE MATRIZ DINAMICA A ARCHIVO salida.txt

FILE * salida;
salida = fopen("salida.log","w");

for (i=0;i<tamano_f;i++){
 for (j=0; j<tamano_c;j++){
if (matriz[i][j]!=repetido){

fprintf(salida, "%d ",matriz[i][j]);
}

}
fprintf(salida, "\n");
}



 //cierre de archivos
fclose(entradax);
fclose(salida);
return 0;

}




int ** generarMatriz(int columnas[], int filas){
int **B;

B = (int **)malloc (filas*sizeof(int *));
int i=0;
for (i=0;i<filas;i++)
B[i] = (int *) malloc (columnas[i]*sizeof(int));

return B;

}


























