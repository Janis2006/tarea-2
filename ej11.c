//Ejercicio 11- calcule la suma de los n ́umeros pares
comprendidos entre el 10 y 50.//
  
#include <stdio.h>
int main() 
{
    int s=0,i=10,a;
    for(i=10;i<=50;i++)
    {
        a=i % 2;
      if(a==0)
      {
          s=s+i;
      }
    }
    printf("La suma de los números pares es:%d",s);
    return 0;
}
