//Ejercicio 3- dado como
dato una cantidad expresada en dólares, convierta esa cantidad en pesos. Tomar en cuenta que:
1dolar ↢ 11.96 pesos.//

#include<stdio.h> 
int main()
    {
       float d=11.96; 
       float c,r;
       printf("Igrese la cantidad de efectivo en dólares: ");
       scanf("%f", &c);
       r=d*c; 
       printf("Usted tiene: %f pesos", r);
       return 0;
       
    }
