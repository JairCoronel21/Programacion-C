// Sentencia Repetitiva for
#include <stdio.h>

int main() {
	// for ascendente
	int x; // Contador
	      
	for (x = 1; x <= 5; x++) {
		printf("N�mero %i \n", x);
	}
	
	printf("\n");
	// for descendente
	int i;
	
	for (i = 25; i >= 0; i -= 5) {
		printf("N�mero %i \n", i);
	}
	system("pause");
	return 0;
}
