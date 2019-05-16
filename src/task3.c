#include <stdio.h>
#include <math.h>
#include <locale.h>

double f(double x);

int main()
{
	setlocale(LC_ALL, "RUS");

	double x;

	printf("¬ведите x:\n");
	scanf("%lf", &x);

	printf("x = %f\n", x);
	printf("f = %f\n", f(x));

	system("pause");

	return 0;
}

double f(double x) {
	return ((((x + 2) / sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2)));
}