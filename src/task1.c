#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	double x, f;

	x = 5;
	f = (((x + 2) / sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2));

	printf("x = %.4f\n", x);
	printf("f = %.4f\n", f);

	printf("Введите x:\n");

	scanf("%lf", &x);
	f = (((x + 2) / sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2));

	printf("x = %.4f\n", x);
	printf("f = %.4f\n", f);

	system("pause");

	return 0;
}

