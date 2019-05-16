#include <stdio.h>
#include <math.h>
#include <locale.h>

double f(double x) {
	return ( (((x + 2) / sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2)) );
}

int main()
{
	setlocale(LC_ALL, "RUS");

	double x;

	printf("¬ведите x:\n");
	scanf("%lf", &x);

	printf("x = %.4f\n", x);
	printf("f = %.4f\n", f(x));

	system("pause");

	return 0;
}

