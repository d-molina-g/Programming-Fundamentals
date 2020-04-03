
#include <stdio.h>

int main (int argc, char *argv [])
{

int x, i, n,y;

i = 1 ;
x = 0; 
n = 0;
y = 0;

printf ("Ingrese un Número \n");
scanf ("%d",&n);

for (i=1; i<n; i++) 
{   if (n%i==0)
      x=x+i;
}

printf ("La suma de sus divisores da: %d \n",x );


for (i=1; i<x; i++) 
{   if (x%i==0)
      y=y+i;
}



if (y==x)
{
 printf ("La Suma de los divisores de %d ",x);
 printf (" da: %d",y);
 printf (", el número Cumple la condicion \n ");
}

else
{   
     printf ("La Suma de los divisores de %d ",x);
 printf (" da: %d",y);
 printf (", el número NO Cumple la condicion \n");
}

 return 0;

}
