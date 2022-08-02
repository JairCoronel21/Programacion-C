//Imprimir las letras del alfabeto
#include<stdio.h>

int main(){
	char letra = 'A'; 
	
    do{
    	printf("%c. \n",letra);
    	letra++;
    }while(letra<='Z');
	
	return 0;
}
