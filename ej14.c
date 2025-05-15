// Ejercicio 14-un arreglo unidimen-
sional de enteros y un n ́umero entero, determine cu ́antas veces se encuentra
el n ́umero dentro del arreglo. //

#include <stdio.h>
int main() 
{
    int n, i, buscar, contador = 0;
    printf("Ingrese la cantidad de elementos que quiere para el arreglo: ");
    scanf("%d", &n);
    int arreglo[n];
    for(i = 0; i < n; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    printf("Ingresa el número que deseas buscar: ");
    scanf("%d", &buscar);
    for(i = 0; i < n; i++) 
    {
        if(arreglo[i] == buscar) 
        {
            contador=contador+1;
        }
    }
    printf("El número %d aparece %d veces en el arreglo.\n", buscar, contador);
    return 0;
}  
