//Ejercicio 16- almacenar en un arreglo unidimen-
sional los 100 primeros n ́umeros pares. Imprimir al final el arreglo.//

#include <stdio.h>

int main() 
{
    int arreglo[100];
    int i;
    for(i = 0; i < 100; i++)
    {
        arreglo[i] = (i + 1) * 2;
    }
    printf("Los primeros 100 números pares son:\n");
    for(i = 0; i < 100; i++)
    {
        printf("%d ", arreglo[i]);
    }

    printf("\n");

    return 0;
}
