//Validación de un número entero usando while
#include <stdio.h>

int main(){
	int n = 0;
	
	
	//Número entre 1 y 10
	// | --> alt + 124
	while (n < 1 || n > 10) {
		system("cls");
		printf("Ingrese número:  "); scanf("%i", &n);
		
		if (n < 1 || n > 10) {
			printf("Numero incorrecto\nSolo ingrese [1 - 10]");
			system("pause");
		}
	}
	printf("\nNúmero valido: %i \n", n);
	
	system("pause");
	return 0;
}

