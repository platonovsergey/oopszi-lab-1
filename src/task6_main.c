#include <stdio.h>
#include <math.h>
#include <locale.h>

void f();

double x, result;

void main()
{
	setlocale(LC_ALL, "RUS");
	
	printf("¬ведите x:\n");
	scanf("%lf", &x);
	
	f();
	printf("f = %f\n", result);

	system("pause");

}