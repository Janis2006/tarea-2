//Ejercicio 5- En un negocio de productos electrodomésticos aplican un descuento del
8% a todos aquellos clientes cuya compra es superior a $2,500. Dado como
dato el monto de la compra del cliente, calcule lo que el cliente debe pagar//

#include<stdio.h> 
int main()
    {
       float electrodomestico,pago,d=0.08; 
       printf("Ingrese el monto de su compra en electrodomésticos:");
       scanf("%f", &electrodomestico);
       if(electrodomestico>2500)
       {
          d=d*electrodomestico; 
          pago=electrodomestico-d;
          printf("Usted debera pagar: %f", pago);
       }
       else
       {
       printf("Su compra no es acredora al descuento");
       }
       return 0;
    }
