// Ejercicio 10- lea 100 n ́umeros naturales y cuente
cu ́antos de ellos son positivos, negativos o nulos.//

#include <stdio.h>

int main() 
{
    int numero;
    int positivos=0, negativos=0, nulos=0;

    printf("Ingresa 100 números naturales (pueden ser positivos, negativos o cero):\n");

    for(int i = 1; i <= 100; i++)
    {
        printf("Número %d: ", i);
        scanf("%d", &numero);

        if (numero > 0)
        {
            positivos=positivos+1;
        } 
        else if (numero < 0) 
        {
            negativos=negativos+1;
        } 
        else 
        {
            nulos=nulos+1;
        }
    }

    printf("\nResultados:\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos (ceros): %d\n", nulos);

    return 0;
}  
