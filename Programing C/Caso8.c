//Validaci�n de un n�mero entero usando while
#include <stdio.h>

int main(){
	int n = 0;
	
	
	//N�mero entre 1 y 10
	// | --> alt + 124
	while (n < 1 || n > 10) {
		system("cls");
		printf("Ingrese n�mero:  "); scanf("%i", &n);
		
		if (n < 1 || n > 10) {
			printf("Numero incorrecto\nSolo ingrese [1 - 10]");
			system("pause");
		}
	}
	printf("\nN�mero valido: %i \n", n);
	
	system("pause");
	return 0;
}

