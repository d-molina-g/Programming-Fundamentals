#include <stdio.h>


 
int main (int argc, char *argv [])
{
 

int categoria,anos;
 
categoria=0;
anos=0;



printf("Indique que categoría tiene desde 1 a 3:\n");
scanf("%d",&categoria);


if (categoria>3 || categoria<0){

printf("Error \n");
 
}

printf("Indique los años de experiencia que tiene: %d \n",anos);
scanf ("%d",&anos);

if (anos>5 && categoria>1)
{
printf("Debe ser contratado \n");
}


if (anos>7 && categoria==1)
{
printf("Debe ser contratado \n");

}

else {
printf("No debe ser contratado \n");
}

return 0;
 
 
}
