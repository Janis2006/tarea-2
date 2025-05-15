//Ejercicio 12- el producto de los N
primeros n ́umeros naturales.//

#include <stdio.h>
int main() 
{
    int n, i, suma = 0;

    printf("Ingresa un número natural: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        suma= suma + i;
    }

    printf("La suma de los primeros %d números naturales es: %d\n", n, suma);

    return 0;
}  
