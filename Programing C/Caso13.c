// Uso de funciones y arreglos
#include <stdio.h>
#define IGV 0.18
#define TC 4.05

float MayorCosto(float arr[], int c) {
	float my = 0;
	int x;
	
	for (x = 0; x < c; x++) {
		if (arr[x] > my)
		   my = arr[x];
	}
	return my;
}

// Procedimiento 
void MostrarRegistro(float arr_c[], float arr_g[], float arr_s[], int c) {
	 if (c > 4) {
	 	printf("Registro np existe.....\n");
	 	printf("Solo escriba un numero entre 1 y 5\n");
	 }
	 else{
	 	printf("------------------\n");
	 	printf("Registro N. %i \n", (pos + i));
	 	printf("------------------\n");
	 	printf("Costo..........: %.2f \n", arr_c[pos]);
	 	printf("Ganancia.......: %.2f \n", arr_g[pos] * arr_c[pos]);
	 	float precio_s = arr_g[pos] * arr_c[pos] + arr_c[pos];
	 	float precio_d = precio_s / 4.03;
	 	printf("Precio S/........: %.2f \n", precio_s);
	 	printf("Precio $.........: %.2f \n", precio_d);
	 	printf("Stock %i \n", arr_s[pos]);
	 }
}

int main() {
	float arr_costo[] = {80, 50.5, 34.3, 19.4, 75};
	float arr_gananacia[] = {0.2, 0.15, 0.1, 0.3, 0.14};
	int arr_stock[] = {10, 8, 15, 12, 3}; 
	
	int cantidad = sizeof(arr_costo) / sizeof(arr_costo[0]);
	int nr = 0;
	
	printf("Número de registro [1-5]: "); scanf("%i", &nr);
	
	MostrarRegistro(arr_costo, arr_ganancia, arr_stock, nr - 1);
	
	float mayor = MayorCosto(arr_costo, cantidad);
	
	printf("\nresumen\n");
	printf("===========\n");
	printf("Mayor costo...: %.2f \n", mayor);
	//Menor costo, Promedio de los costos
	system("pause");
	return 0;
}
