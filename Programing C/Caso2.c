//Manejo de variables y constantes
#include <stdio.h>

#define IGV 0.18

int main () {
	char producto[] = "Laptop Core i5";
	int cantidad = 3;
	float precio = 598.99;
	float tc = 4.03;
	
	float parcial = cantidad * precio;
	float impuesto = parcial * IGV;
	float total_d = parcial + impuesto;
	float total_s = total_d * tc;
	
	printf("RESULTADOS\n");
	printf("----------\n");
	printf("Producto......: %s \n", producto);
	printf("Cantidad......: %i \n", cantidad);
	printf("Precio........: %.2f \n", precio);
	printf("Parcial.......: %.2f \n", parcial);
	printf("Impuesto......: %.2f \n", impuesto);
	printf("Total en $....: %.2f \n", total_d);
	printf("Total en S/...: %.2f \n", total_s);
	system("pause");
	return 0;
	
}
