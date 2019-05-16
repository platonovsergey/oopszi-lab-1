#include <stdio.h>
#include <math.h>
#include <locale.h>

void f(void);

double x, result;

void main()
{
	setlocale(LC_ALL, "RUS");

	printf("¬ведите x:\n");
	scanf("%lf", &x);
	f();
	printf("f = %.4f\n", result);

	system("pause");

}

void f()
{
	result = (((x + 2) / sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2));
}