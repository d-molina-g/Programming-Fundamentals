#include <stdio.h>
#include <math.h>

int area_per(int n,int z ){
int x=0,cua=0,cir=0,uno=0,dos=0,tres=0,rec1=0,rec2=0,base=0,altura=0;

if(z==2){
 if(n==1){
printf("Ingrese la arista del cuadrado\n");
scanf("%d",&cua);
x=cua*cua;
return x;
}
 if(n==2){
printf("Ingrese el radio del circulo\n");
scanf("%d",&cir);
x=cir*cir*3.14;
return x;
}
 if(n==3){
printf("Ingrese lados del rectangulo\n");
scanf("%d , %d",&rec1,&rec2);
x=rec1*rec2;
return x;
}
 if(n==4){
printf("Ingrese base y altura del triangulo\n");
scanf("%d , %d",&base,&altura);
x=base*altura/2;
return x;
}
}


if(z==1){
 if(n==1){
printf("Ingrese la arista del cuadrado\n");
scanf("%d",&cua);
x=cua*4;
return x;

}
 if(n==2){
printf("Ingrese el radio del circulo\n");
scanf("%d",&cir);
x=2*cir*3.14;
return x;
}
if(n==3){
printf("Ingrese lados del rectangulo\n");
scanf("%d , %d",&rec1,&rec2);
x=2*rec1+2*rec2;
return x;
}
 if(n==4){
printf("Ingrese lados del triangulo\n");
scanf("%d , %d , %d",&uno,&dos,&tres);
x=uno+dos+tres;
return x;
}
}

}


int main (int argc, char * argv [])
{

int x,num=0,rend=0,rendimiento=0,rendimiento_total=0,diferencia_rendimiento=0,cont=0,cont2=0,cont_total=0,t=0,estimado=0;

printf("Ingrese su ultimo nivel de Rendimiento (0-100)\n");
scanf("%d",&rend);
 
printf ("Ingrese una de estas opciones para calcular su Area o su Perimetro:\n-Cuadrado (1)\n-Circulo (2)\n-Rectangulo(3)\n-Triangulo(4)\n-Salir(5) \n");

scanf("%d",&num); 

while (num!=5){

      
printf ("Desea Calcular Perimetro (1) o Area (2)\n");
scanf("%d",&t);


printf("Ingrese su Resultado Estimado\n ");
scanf("%d",&estimado);

//se calcula en la funcion
area_per(num,t);


if (estimado+1==x || estimado+2==x || estimado+3==x || estimado-3==x || estimado-2==x || estimado-1==x || estimado==x){ // lo habia hecho asi 3>=abs(estimado-x) pero no funcionó
printf("Su Estimacion es Correcta\n ");
cont=cont+1;
} 
else{
printf("Su Estimacion es Erroneoa\n ");
cont2=cont2+1;
}

cont_total=cont_total+1;

printf ("Ingrese una de estas opciones para calcular su Area o su Perimetro:\n-Cuadrado (1)\n-Circulo (2)\n-Rectangulo(3)\n-Triangulo(4)\n-Salir(5) \n");
scanf("%d",&num);

}
rendimiento=cont*100/cont_total;
diferencia_rendimiento=abs(rendimiento-rend);

printf("Sus respuestas Correctas son: %d \n",cont);
printf("Sus respuestas Erroneas son: %d \n",cont2);
printf("Su nivel de Rendimiento es : %d \n",rendimiento);
printf("Su diferencia respecto al ultimo juego es: %d \n",diferencia_rendimiento);





return 0;

}
