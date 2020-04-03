#include <stdio.h>


 
int main (int argc, char *argv [])
{
 

int num;
 
num=0;



printf("Ingrese número entero positivo\n");
scanf("%d",&num);


while (num>1){

if (num%2==0){
num=num/2;
printf("%d \n",num);
}

else if (num%2!=0) {
num=(num/3)+1;
printf("%d \n",num);
}

}



return 0;
 
 
}
