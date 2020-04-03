#include <stdio.h>

int main (int argc, char *argv []) {
  int a=7,b=9,c=3 ;
  float d=1,e=2,f=3;
  char j=4,k=5,l=6;

//(1) 
printf ("\n Ejercicio 1\n");
int i=1;

printf ("Con i=1 \n");
 a=(d*e+c+i);
printf ("a es igual a: %d \n",a);

 i=2;

printf ("Con i=2 \n");
 a=(d*e+c+i)+a;
printf ("a es igual a: %d \n",a);
 
 i=3;

printf ("Con i=3 \n");
 a=(d*e+c+i)+a+a*(b/c);
printf ("a es igual a: %d \n",a);
//(2)
printf ("\n Ejercicio 2\n");
i=1;
printf ("\n Con i=1 \n");
 a=(j*k+l+i);
 printf ("a es igual a: %d \n",a);

 i=2; 
printf ("Con i=2 \n");
 a=(j*k+l+i)+a;
 printf ("a es igual a: %d \n",a);

i=3; 
printf ("Con i=3 \n");
 a=(j*k+l+i)+f*(l/l)+a;
 printf ("a es igual a: %d \n",a);
//(3)
printf ("\n Ejercicio 3\n");
a=7;
i=a;
printf ("\n Con i=a \n");
 a=(a*a)+a*(a/a);
 printf ("a es igual a: %d \n",a);

return 0;

}



