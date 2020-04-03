#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){


//abrir entrada1
FILE * entrada1;
entrada1 = fopen("entrada1.txt","r");

if( entrada1 == NULL ){
printf("Problemas con lectura de archivo\n");
exit(-1);
}


//abrir entrada 2
FILE * entrada2;
entrada2 = fopen("entrada2.txt","r");

if( entrada2 == NULL ){
printf("Problemas con lectura de archivo\n");
exit(-1);
}

char f,c;
int cont=0;
int tamano_f=0,tamano_c=0;

//LARGO FILAS MATRIZ
while ((f=fgetc(entrada2))!='\n'){
cont++;
}
tamano_f=cont-(cont/2);

// printf("cantidad de filas en matriz= %d\n",tamano_f);



//LARGO COLUMNAS MATRIZ
while (c!=EOF){    //hasta el final del archivo, se suma la cantidad de espacios.

if((c=fgetc(entrada2))=='\n'){
tamano_c++;

}

}
tamano_c=tamano_c+1; //añadir el salto de linea ultima fila

//printf("cantidad de columnas en matriz= %d\n",tamano_c);




fclose(entrada2);

char palabras[100];

char caracter;

//asignamos el mensaje a palabras desde entrada1
fgets(palabras, 100 ,entrada1) ;



fclose(entrada1);
FILE * entradax1;   //creo otra variable que reciba el archivo 'entrada1' porque con la linea 65 me arrojaba problemas con el fgets para posteriormente recibir caracteres desde ese archivo.

entradax1=fopen("entrada1.txt","r"); 

if( entradax1 == NULL ){
printf("Problemas con lectura de archivo\n");
exit(-1);
}

FILE * entradax2; 

entradax2=fopen("entrada2.txt","r"); 

if( entradax2 == NULL ){
printf("Problemas con lectura de archivo\n");
exit(-1);
}



char variable[50]={""}; //recibira cada palabra, separada por espacio desde palabras[].
int largo; //el largo de cada palabra recibida en variable[].

//MATRIZ 
char matriz[100]; //almacena caracteres de matriz
int z=0,i=0,j=0;
char gg;


while((gg=fgetc(entradax2))!=EOF){  //cantidad de caracteres en matriz, hasta fin de archivo.

matriz[z]=gg;

z++;
}

//CONSTRUIMOS LA MATRIZ
int A[tamano_f][tamano_c];
z=0;
for (i=0;i<tamano_f;i++){
 for (j=0; j<tamano_c;j++){
A[i][j]=matriz[z];
z=z+2; //ya que en matriz tomaba ademas los espacios.
}
}


//IMPRIMIR MATRIZ
/*
for (i=0;i<tamano_f;i++){
 for (j=0; j<tamano_c;j++){
printf("%c ",A[i][j]);
}
printf("\n");
}
*/



// CALCULOOOOOOOOOOOOOOOOOO

//--------------------------------------------------------


int cont2=0;//lee los caracteres iguales
int cont_total=0; //lee el total de palabras encontradas.
int x=0;

for(x;palabras[x]!=' ';x++){
variable[x]=palabras[x];

}
largo=strlen(variable);  //largo de las diferentes palabras en "palabras".


//CONTAR POR FILAS

x=0;

for (i=0;i<tamano_f;i++){
 
 
for (j=0; j<tamano_c;j++){
 

 if (A[i][j]==variable[x]){
  cont2++;
 x++;
 
  if (cont2==largo){
  //cont2==largo
   cont_total++;  //se guardaran las veces que esta la palabra horizontalmente en la matriz
 x=0;
 cont2=0;
 }
 

 }

 else{
  
  x=0;
  cont2=0;
 }



 }

 }


//CONTAR POR COLUMNAS

x=0;
cont2=0;
int cont_total2=0;

for (j=0; j<tamano_c;j++){
for (i=0;i<tamano_f;i++){
 
 
 if (A[i][j]==variable[x]){
 cont2++;
 x++;
 
  if (cont2==largo){
 cont_total2++;  //se guardaran las veces que está la palabra verticalmente en la matriz.
 x=0;
 cont2=0;
 }
 

 }

 else{
  
  x=0;
 cont2=0;
 }



 }
 }



cont_total2=cont_total+cont_total2;
//printf("TOTAL VECES= %d\n",cont_total2);


////////////////////////////////////////////////////////////////

//CIERRE ARCHIVOS Y ESCRITURA A SALIDA.TXT


fclose(entradax1);
fclose(entradax2);

FILE * salida;
salida = fopen("salida.txt","w");


fprintf(salida, " %s = ",variable);
fprintf(salida, "%d \n",cont_total2);


//printf("%s\n",palabras);
//printf("%s\n",variable);
//printf("%d\n",largo);

fclose(salida);

//Nota: solo me resultó con una sola palabra (1era) en el archivo entrada1.txt, mi idea era alojarla en variables y tratarlas pero no supe como hacerlo.


return 0;
}
