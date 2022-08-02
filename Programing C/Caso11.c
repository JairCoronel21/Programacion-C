//Sentencia Repetitiva for
//usando Arreglos
#include <stdio.h>
#include <locale.h>
int main() {
	//Punteros
	char *arr_nombre[] = {"Carlos Ríos", "Rosa Flores", "Ricardo Gonzáles", "Maria Lopez", "Roberto Caceres"};
	int arr_nota1[] = {8, 15, 13, 10, 18};
	int arr_nota2[] = {11, 17, 16, 9, 19};
	
	int i;
	
	
	int cantidad = sizeof(arr_nombre) / sizeof(char *);
	
    
	
	printf("\nLISTA DE REGISTROS\n");
	printf("--------------------\n");
	
	for (i = 0; i < cantidad; i++) {
		float promedio =  arr_nota1[i]*0.4 + arr_nota2[i]*0.6;
		printf("\nRegistro %i: \n", (i + 1));
		printf("---------------\n");
		printf("Alumno.............: %s \n", arr_nombre[i]);
		printf("Práctica...........: %i \n", arr_nota1[i]);
		printf("Final .............: %i \n", arr_nota2[i]);
		printf("Promedio ..........: %.2f \n", promedio);
		if(promedio >= 11) {
			printf("Estado: Aprobado \n");
		}else{
			printf("Estado: Desaprobado \n");
		}
	}
	
	
	

	
	system("pause");
	return 0;
	
}
