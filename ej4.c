//Ejercicio 4- Una persona invierte en un banco una determinada cantidad de dinero y
a una cierta tasa de inter ́es mensual. Se obtendra la cantidad que obtendra al finalizar el mes//

#include<stdio.h> 
int main()
    {
       float i,t=0.15,r; 
       printf("Igrese la cantidad de efectivo que desea invertir, recuerde que la tasa de interes es del 15%: ");
       scanf("%f", &i);
       t=i*t; 
       r=i+t;
       printf("Usted va a resibir: %f al final del mes", r);
       return 0;
       
    }
