#include <stdio.h>
#include <stdlib.h>


int tiempo (int cm,int n); 

int main(){


int cm=100; //100 centimetros

int n=0;

printf ("%d segundos\n",tiempo(cm,n));

return 0;
}

int tiempo (int cm,int n){

if (cm==0){
return n*3;
}

else{
n=n+1;

return tiempo (cm-1,n);

}


}
