#include <stdio.h>
#include <math.h>
 
int main (int argc, char *argv [])
{
 

int dividendo,divisor,cociente=0,x=0,resto=0;

printf("Ingrese A: ");
scanf("%d",&dividendo);
printf("Ingrese B: ");
scanf("%d",&divisor);

while(x+divisor<=dividendo)
{
x=x+divisor;
cociente++;
}
resto = dividendo - cociente * divisor;
printf("\n A mod B es:%d \n",resto); 

system("pause");
return 0;
 
}
