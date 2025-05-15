// Ejercicio 9 - la tabla de multiplicar de un
n ́umero entero N, comenzando desde el 1.//

#include<stdio.h>
int main()
{
   int n,t,i=1;
   printf("Ingrse el número de la tabla que desea saber: ");
   scanf("%d",&n);
   for(i=1; i<=10;i++)
   {
       t=n*i;
       printf("%d * %d= %d \n",n,i,t);
   }
   return 0; 
}  
