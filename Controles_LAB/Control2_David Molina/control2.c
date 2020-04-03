#include <stdio.h>
 

 
//Control 2
 
int main (int argc, char *argv [])
{

//EJERCICIO 1
printf("\n\n----EJERCICIO 1----\n\n");

int x=0;
printf ("\n INGRESE UN NÚMERO para comprobar si es negativo o no, si es par o impar, si es menor al umbral de 15 (entero), si está dentro del intervalo [-10,87]\n");
scanf ("%d",&x);
//1
if (x<0){
printf ("El numero ES negativo\n");
}
else {
printf ("El número NO es negativo\n");
}

//2
if (x%2==0){
printf ("El número ES Par\n");
}

else{
printf ("El número ES Impar\n");
}

//3
if (x<15){
printf ("El número ES menor que el umbral 15\n");
}
else{
printf ("El numero NO es menor que el umbral 15\n");
}

//4
if (x>=-10 && x<=87)
{
printf ("El número está dentro del intervalo [-10,87]\n");
}
else{
printf ("El número NO está dentro del intervalo [-10,87] \n");
}

//5 
char z;
printf ("Ingrese un caracter para comprobar si es vocal o consonante (en minuscula) \n");

scanf ("%s",&z);

if (z=='a' || z=='e' || z=='i' || z=='o' || z=='u')
{
printf ("El caracter es una vocal\n");
}

else {
printf ("El caracter es una consonante\n");
}

//EJERCICIO2
printf("\n\n----EJERCICIO 2----\n\n");
printf("\n Ingrese a,b y c de la ecuación de segundo grado----(ax^2+bx+c=0) \n");

int a=0,b=0,c=0,raiz=0;
scanf ("%d",&a);
scanf ("%d",&b);
scanf ("%d",&c);
raiz=(b*b)-(4*a*c);
if (raiz==0){
printf ("La ecuación tiene SOLO UNA solución real. \n");
}

if (raiz<0){
printf ("La ecuación NO tiene solución real. \n");
}

if (raiz>0){
printf ("La ecuación tiene DOS soluciones reales y distintas. \n");
}



//EJERCICIO 3
printf("\n\n----EJERCICIO 3----\n\n");

int uno=0,dos=0,tres=0;
printf ("Ingrese 3 números para ordenarlos de menor a mayor\n");
scanf ("%d",&uno);
scanf ("%d",&dos);
scanf ("%d",&tres);

if (uno>dos && uno>tres ){
if (dos>tres){
printf ("El 1er n° es el mayor, el 2° es mayor al tres\n");
}
if (tres>dos){
printf ("El 1er n° es el mayor, el 2° es menor al tres\n");
}
}

if (dos>uno && dos>tres ){
if (uno>tres){
printf ("El 2do n° es el mayor, el 1° es mayor al tres\n");
}
if (tres>uno){
printf ("El 2do n° es el mayor, el 1° es menor al tres\n");
}
}

if (tres>uno && tres>dos ){
if (uno>dos){
printf ("El 3ro n° es el mayor, el 1° es mayor al 2°\n");
}

if (dos>uno){
printf ("El 3ro n° es el mayor, el 1° es menor al 2°\n");
}
}


//EJERCICIO 4
//Maquina de Dulces
printf("\n\n----EJERCICIO 4----\n\n");
 
printf ("Esta Maquina recibe billetes de: \n 1000\n 2000\n 5000\n 10000\n 20000\n");
 
int precio,o,p,q,r,vuelto,billete;
precio=0;
o=0;
p=0;
q=0;
r=0;
vuelto=0;
billete=0;
 
printf ("Ingrese el Valor a pagar:");
scanf ("%d",&precio);
 
 
printf ("Ingrese billete con el que se pagará:");
scanf ("%d",&billete);
 
vuelto=billete-precio;
 
if (precio > billete)
{
 printf ("Falta dinero para realizar la compra,intente nuevamente");
}
else
{
 if (vuelto>=500)
  { o=vuelto/500;
    p=(vuelto%500)/100;
}
 else if (vuelto>=100)
  { p=vuelto/100;
    q=(vuelto%100)/50;
}
 
 else if (vuelto>=50)
  { q=vuelto/50;
    r=(vuelto%50)/10;
}
 else if (vuelto>=10)   
  { r=vuelto/10;
     
}
 
}
printf ("Su vuelto es:  %d \n",vuelto);
 
 
printf ("\n %d Monedas de 500, %d Monedas de 100, %d Monedas de 50, %d Monedas de 10 \n",o,p,q,r);
 
  
return 0;
}


