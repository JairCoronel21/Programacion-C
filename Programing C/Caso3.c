// Lectura de datos y operaciones básicas
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "");
	float n1 = 0, n2 = 0;
	
	printf("Primer número.......: ");
	scanf("%f", &n1);
	
	printf("Segundo número.......: ");
	scanf("%f", &n2);
	
	float suma = n1 + n2;
	float resta = n1 - n2;
	float producto = n1 * n2;
	float division = n1 / n2;
	int resto = (int) n1 % (int) n2;
	
	
	printf("RESULTADOS\n");
	printf("==========\n");
	printf("Numero Ingresados\n");
	printf("-----------------\n");
	printf("Numero 1........: %.0f \n", n1);
	printf("Numero 2........: %.0f \n\n", n2);
	printf("Operaciones Básicas\n");
	printf("-----------------\n");
	printf("Suma...........: %.0f \n", suma);
	printf("Resta..........: %.0f \n", resta);
	printf("Producto.......: %.0f \n", producto);
	printf("Division.......: %.0f \n", division);
	printf("Resto..........: %.0f \n", resto);
	
	system("pause");
	return 0;
}
