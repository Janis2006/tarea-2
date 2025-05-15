// Ejercicio 15- dado como entrada un arreglo unidi-
mensional de enteros, determinar cu ́antos de ellos son positivos, negativos
o nulos.//

#include <stdio.h>
int main() 
{
    int n, i;
    int positivos = 0, negativos = 0, nulos = 0;
    printf("Ingrese la cantidad de números que tendra el arreglo: ");
    scanf("%d", &n);
    int arreglo[n];
    for(i = 0; i < n; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(arreglo[i] > 0)
        {
            positivos=positivos+1;
        } 
        else
         if(arreglo[i] < 0) 
             {
            negativos=negativos+1;
             }
        else 
            {
            nulos=nulos+1;
            }
    }
    printf("\nPositivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos (ceros): %d\n", nulos);
    return 0;
}  
