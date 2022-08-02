//Sentencia repetitiva for
//Usando Arreglos
#include <stdio.h>

int main() {
	int arr_edad[] = {25, 15, 18, 17, 33, 15};
	
	int cantidad = sizeof(arr_edad) / sizeof(arr_edad[0]);
	int x;
	
	printf("\nLISTA DE EDADES");
	printf("---------------\n");
	
	for (x = 0; x < cantidad; x++) {
		printf("Edad %i: %i \n", (x + 1), arr_edad[x]);
		if(arr_edad[x]>17){
        	printf("Estado de la edad %i: Es Mayor de Edad\n",(x + 1), arr_edad[x]);
	    }else{

		printf("Estado de la edad %i: Es Menor de Edad\n",(x + 1), arr_edad[x]);
	}
		//Mostrar un mensaje: Mayor de edad o Menor de edad
	}
	
	


	system("pause");
	return 0;
}
