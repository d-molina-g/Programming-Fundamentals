#include <stdio.h>


 
int main (int argc, char *argv [])
{
 

int num,cont1,cont2,cont3,cont4,cont5,porce1,porce2,porce3,porce4,porce5,cont_total;
 
num=0,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,porce1=0,porce2=0,porce3=0,porce4=0,porce5=0,cont_total=0;

printf("Ingrese el número de su voto (1-5) \n");
scanf("%d",&num);

while ((num!=0) && (num>=1 && num<=5))
{
if (num==1)
{
cont1=cont1+1;
}

if (num==2)
{
cont2=cont2+1;
}

if (num==3)
{
cont3=cont3+1;
}

if (num==4)
{
cont4=cont4+1;
}

if (num==5)
{
cont5=cont5+1;
}


scanf("%d",&num);
cont_total=cont_total+1;
}
porce1=cont1*100/cont_total;
porce2=cont2*100/cont_total;
porce3=cont3*100/cont_total;
porce4=cont4*100/cont_total;
porce4=cont4*100/cont_total;
porce5=cont5*100/cont_total;

printf ("La lista 1 : sus votos son %d, su porcentaje de votos es %d\n",cont1,porce1);
printf ("La lista 2 : sus votos son %d, su porcentaje de votos es %d\n",cont2,porce2);
printf ("La lista 3 : sus votos son %d, su porcentaje de votos es %d\n",cont3,porce3);
printf ("La lista 4 : sus votos son %d, su porcentaje de votos es %d\n",cont4,porce4);
printf ("La lista 5 : sus votos son %d, su porcentaje de votos es %d\n",cont5,porce5);

return 0;
}







