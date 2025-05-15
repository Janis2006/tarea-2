//Ejercicio 8 - dados dos n ́umeros
enteros, si un número es divisor del otro.//

#include<stdio.h>
int main()
{
    int a,b,r;
    printf("Ingrese 2 números separados por una coma: ");
    scanf("%d,%d",&a,&b);
    if(a % b==0)
    {
        printf("%d es divisor de %d", b,a);
    }
    else
    {
        printf("El número %d no es divisor del número %d ", b,a);
    }
    return 0;
}
