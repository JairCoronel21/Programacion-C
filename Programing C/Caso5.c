//Otras operaciones matem�ticas
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int n1 = 0, n2 = 0;
	
	printf("Numero 1: "); scanf("%i", &n1);
	printf("Numero 2: "); scanf("%i", &n2);
	
	
	int rpta1 = pow(n1, 3);
	int rpta2 = pow(n2, 4);
	int rpta3 = pow(n1, 2) + pow(n2, 2);

	float rpta4 = sqrt(n1);
	float rpta5 = pow(n1, (float)1/3);
	float rpta6 = pow(n2, 2);
	int rpta7 = pow(n2, 3);
	
	//Realizar 2 operaciones mas 
	
	printf("\nRESULTADOS\n");
	printf("==========\n");
	printf("Primer n�mero elevado al cubo..........: %i \n", rpta1);
	printf("Segundo n�mero elevado a la cuarta.....: %i \n", rpta2);
	printf("Suma de los cuadrados de ambos n�meros..: %i \n", rpta3);
	printf("la raiz cuadrada del primer n�mero.....: %i \n", rpta4);
	printf("Raiz c�bica del primer n�mero...........: %i \n", rpta5);
	printf("Segundo n�mero elevado al cuadrado....: %i \n", rpta6);
	printf("Segundo n�mero elevado al cubo..........: %i \n", rpta7);
	
	system("pause");
	return 0; 
	

	
}
