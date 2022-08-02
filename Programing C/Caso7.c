//Calcular: Sumatoria y Factorial
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
    int n = 0;
	int i = 1, s=0;
    int x = 1, f=1;
	printf("Ingrese numero: "); scanf("%i", &n);

	printf("\nRESULTADOS");
	printf("\n===========\n");

	while (i <= n) {
		s +=i;

        if (i < n)
            printf("%i + ", i);
        else
            printf("%i = ", i);

		i++;

	}
	printf("%i", s);
	printf("\n");

    while (x <= n) {
		f *=x;

        if (x < n)
            printf("%i x ", x);
        else
            printf("%i = ", x);

		x++;
	}
	printf("%i", f);

	//printf("\nRESULTADOS");
	//printf("\n===========\n");
	//printf("Sumatoria.......: %i \n", s);
	//printf("Factorial.......: %i \n", f);
	printf("\n");
	system("pause");
	return 0;
}
