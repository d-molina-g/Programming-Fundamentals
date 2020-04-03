#include <stdio.h>
#include <math.h>

//POKEMON
 
int main (int argc, char *argv [])
{
 

int St,T,i,proba;
srand(time(NULL));
int n = rand()%1001;  
float F;

F=1.19909;  //nivel de felicidad del pokémon
St=0;
T=0;
i=0;
proba=1; //probabilidad de captura

n=1;
printf("\n--Probabilidad de captura de captura de un Pokemón en la zona Safari usando una Safari Ball--\n");

printf("Ingrese Salud máxima del Pokémon(St)=");
scanf("%d",&St);
printf("Ingrese grado de Timidez-Agresividad del Pokémon(T)=");
scanf("%d",&T);



while(i<=n){

proba=(1-(4*pow(St-(pow(F,T)),2))/(pow(3.14,2)*pow((2*i-1),2)))*proba;

i=i+1;

}

printf("Probabilidad de captura (%d,%d)=%d\n",St,T,proba);






return 0;
 
 
}
