//Cajero automatico con menú
#include<stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	
    int opcion;
    float agrego, retiro, saldo = 5000;

    printf("\n*********Bienvenido al Cajero*********");
    printf("\nIngrese las opciones por favor:");
    printf("\n1. Depositar en su cuenta");
    printf("\n2. Retirar dinero");
    printf("\n3. Salir");
    printf("\nIngrese una opción: ");
    scanf("%i",&opcion);
    
    switch(opcion){
    	case 1: printf("\nCuanto dinero desea ingresar en su cuenta: ");
    	        scanf("%f",&agrego);
    	        saldo += agrego;
    	        printf("El saldo total en /S es de: %.2f",saldo);
    	break;
    	case 2: printf("\nCuanto dinero desea retirar de su cuenta: ");
    	        scanf("%f",&retiro);
    	        if(retiro > saldo){
    	        	printf("No cuenta con fondos suficientes para retirar ese monto");
    	        }
    	        else{
    	        
    	        saldo -= retiro;
    	        printf("El saldo disponible en /S es de: %.2f",saldo);
    	        }
    	break;
    	case 3: printf("\tMuchas Gracias!!! Nos vemos pronto: ");
    	break;
    	
    	default:
		         printf("\nIngrese las opciones correctas por favor ");
    }





}
