//Ejercicio 7- para calcular el precio de un ticket ida y vuelta
en ferrocarril, conociendo la distancia de ida y el tiempo de estancia.
También se sabe que si el numero de d ́ıas de estancia es mayor a 7 y la
distancias total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene
un descuento del 30%. El precio por km es de $0.23.//

#include<stdio.h> 
int main()
    {
       float km=0.23,tiempo,distancia,d=0.30,t,k,p;
       printf("Ingrese el tiempo de estancia: ");
       scanf("%f",&tiempo);
       printf("Ingrese la distancia que va a recorrer de ida: ");
       scanf("%f",&distancia);
       if(tiempo>=7 && distancia>=800)
       {
           distancia=distancia*2;
           k=distancia*km;
           p=k*d;
           t=k-p;
           printf("Usted debera pagar $%f, ya que se le aplico el descuento correspondiente",t);
       }
       else
       {
           distancia=distancia*2;
           t=distancia*km;
           printf("Uated debera pagar $%f",t);
       }
       return 0;
    }  
