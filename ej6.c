//Ejercicio 6 -Dado como dato el sueldo de un trabajador considere un aumento del
15% si un sueldo es inferior a $1,000 y de un 12% en caso contrario.
Imprimir el sueldo con el aumento incorporado.//

#include<stdio.h> 
int main()
    {
        float s,aumento,t;
        printf("Ingrese su sueldo: ");
        scanf("%f",&s);
        if(s<=1000)
        {
            aumento=0.15*s;
            t=s+aumento;
            printf("Usted cobraria $%f con el aumento incluido",t);
        }
        else
        {
            aumento=0.12*s;
            t=s+aumento;
            printf("Usted cobraria $%f con el aumento incluido", t);
        }
    return 0;
    }
