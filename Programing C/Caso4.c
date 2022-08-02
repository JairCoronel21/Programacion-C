//Calculo de un promedio de dos notas
//Considerando lo siguientes pesos:
//Nota 1 con peso del 45% y la Nota 2 con peso del 55%
#include <stdio.h>


int main(){
	char alumno[20] = "";
	float nota1 = 0, nota2 = 0;
	
	printf("Nombre del alumno.....: ");
	scanf("%[^\n]", alumno);
	
	printf("Primera nota..............: ");
	scanf("%f", &nota1);
	
	printf("Segunda nota..............: ");
	scanf("%f", &nota2);
	
	float promedio = nota1 * 0.45 + nota2 * 0.55;
	
	printf("\nRESULTADOS\n");
	printf("\n==========\n");
	printf("Alumno.........: %s \n", alumno);
	printf("Nota1..........: %.0f \n", nota1);
	printf("Nota2..........: %.0f \n", nota2);
	printf("Promedio.......: %.2f \n", promedio);
	
	system("pause");
	return 0;
	
}
