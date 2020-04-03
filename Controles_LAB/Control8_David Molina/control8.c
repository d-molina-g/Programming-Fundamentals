#include <stdio.h>
#include <math.h>

struct Complex {
 int a;
 int b; 
 float c;
 float d;

};

typedef struct Complex complex; 

//declaracion de funciones
float absoluto (complex k);
float conjugado( complex l);
complex suma(complex a, complex b);
complex resta(complex a , complex b);
complex multiplicacionEscalar(complex a, float k);
complex multiplicacionComplejo( complex a, complex b);
complex divisionEscalar(complex a, float k);
complex divisionComplejo(complex a, complex b);


int main(){

complex sum;
complex rest;
complex mulesca;
complex mulcomplex;
complex diviesca;
complex divicomplex;


complex z1 = {10 , 20};
complex  z2 = {5, 15};

absoluto(z1);

conjugado(z1);

sum= suma(z1,z2);
printf("suma= %d , %d \n",sum.a,sum.b);

rest= resta(z1,z2);
printf("resta= %d , %d \n",rest.a,rest.b);


float f=12; // escalar

mulesca = multiplicacionEscalar(z1,f);
printf("multiplicacion por un escalar= %f , %f \n",mulesca.c,mulesca.d);

mulcomplex = multiplicacionComplejo(z1,z2);
printf("multiplicacion por un complejo= %d , %d\n",mulcomplex.a,mulcomplex.b);

diviesca=divisionEscalar(z1,f);
printf("division por un escalar= %f , %f\n",diviesca.c,diviesca.d);

divicomplex = divisionComplejo(z1,z2);
printf("division por un complejo= %d , %d\n",divicomplex.a,divicomplex.b);

return 0;
}

//absoluto
float absoluto( complex k){
float abso=0;
abso=sqrt(pow(k.a,2)+pow(k.b,2));

printf("absoluto= %f \n",abso);
}

//conjugado
float conjugado( complex l){
float conju=0;
conju=l.a-l.b;

printf("conjugado= %f \n",conju);
}
//suma

complex suma (complex a , complex b){
complex result;
 result.a = a.a + b.a;
 result.b = a.b + b.b;

return result;
}
//resta

complex resta (complex a , complex b){
complex result;
 result.a= a.a - b.a;
 result.b= a.b - b.b;

return result;
}

//multipicacion por escalar
complex multiplicacionEscalar(complex a, float k){
complex result;
result.c = k*a.a;
result.d = k*a.b;
return result;
}

//multiplicacion por complejo
complex multiplicacionComplejo( complex a, complex b){
complex result;
result.a=a.a*b.a-a.b*b.b;
result.b=a.a*b.b+a.b*b.a;
return result;
}

//Division por escalar
complex divisionEscalar(complex a, float k){
complex result;
result.c = a.a/k;
result.d = a.b/k;
return result;
}

//Division por complejo
complex divisionComplejo( complex a, complex b){
complex result;
result.a=(a.a*b.a+a.b*b.b)/(pow(b.a,2)+pow(b.b,2));
result.b=(a.b*b.a-a.a*b.b)/(pow(b.a,2)+pow(b.b,2));
return result;
}













