//Uso de fuunciones
#include <stdio.h> 
#include <string.h>

//función que devuelve el género
char* MostrarGenero(char g[]) {
	char mensaje[15] = "";
  
  //Devuelve 0 si al comparar los elementos son iguales	
	int n1 = strcmp(g, "M");
	int n2 = strcmp(g, "F");
	
	if (n1 == 0)
	    strcpy(mensaje, "Masculino"); // Asigna el valor Masculino
	else if (n2 == 0)
	    strcpy(mensaje, "Femenino"); // Asigna el valor Femenino
	else
	    strcpy(mensaje, "Desconocido");
	    
	return mensaje;
}

int main () {
	char genero[1] = "";
	
	printf("Ingrese genero: "); scanf("%s", genero);
	
	printf("\nRESULTADOS\n");
	printf("------------\n");
	printf("Genero ingresado: %s \n ", MostrarGenero(genero));
	
	system("pause");
	return 0;
}
