#include <stdio.h>
#include <math.h>
 
int main (int argc, char *argv [])
{
 
srand(time(NULL));
int n = rand()%10001; 
int reves=0;
int resto=0;

printf("Su numero inicial aleatorio es: %d \n",n);

while(n!=0){
resto=n%10;                  
n=n/10;                         
reves=reves*10+resto;     

}

printf("Su descuento es: %d \n", reves);
system("pause");

return 0;
 
}
