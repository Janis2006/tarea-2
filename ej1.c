//ejercicio 1- El usuario da dos números y
calcular la suma, resta y multiplicaci ́on de dichos n ́umeros.//

//Utilizando variables flotantes por si el usuario usa números con decimales//
#include<stdio.h>
int main()
{
    float s,r,m,a,b;
    printf("Ingrese dos números separados por coma:  ");
    scanf("%f,%f", &a,&b);
    s=a+b;
    r=a-b;
    m=a*b;
    printf("El resultado de la suma es: %f\n El resultado de la resta es: %f\n El resultado de la multiplicación es: %f\n", s,r,m);
    return 0;
    
}

//utilizando eneteros//
#include<stdio.h>
int main()
{
    int s,r,m,a,b;
    printf("Ingrese dos números separados por coma:  ");
    scanf("%d,%d", &a,&b);
    s=a+b;
    r=a-b;
    m=a*b;
    printf("El resultado de la suma es: %d\n El resultado de la resta es: %d\n El resultado de la multiplicación es: %d\n", s,r,m);
    return 0;
    
}
