#include <stdio.h>
#include <stdlib.h>

int fact_primo (int n, int m);



int main (){

fact_primo(23244,2);
}

int fact_primo(int n, int m){
 
if (m==n){
printf (" %d ",m);
return 1;

}

else{

if (n%m==0){
printf ("%d ",m);
n=n/m;
return fact_primo(n,m);  
}

else{

return fact_primo(n,m+1); 

}
}

}


