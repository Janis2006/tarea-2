//Ejercicio 2 - dado el radio de un  círculo, calcule
e imprima el  ́area y la circunferencia.)//
 #include<stdio.h> 
#include<math.h>
int main()
    {
        double pi=3.1416;
        double radio,area,circunferencia,r;
        printf("Ingrese el radio: ");
        scanf("%lf", &radio); 
         r=radio*radio;
        area=pi*r; 
        circunferencia=2*pi*radio; 
        printf("El área de el circulo es: %lf\n", area);
        printf("La circunferencia de su circulo es:%lf\n",circunferencia); 
    return 0;
    } 
