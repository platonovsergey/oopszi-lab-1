#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "headers/func.h"

void main()
{
	setlocale(LC_ALL, "RUS");

	printf("¬ведите x:\n");
	scanf("%lf", &x);
	f();
	printf("x = %f\n", x);
	printf("f = %f\n", result);

	system("pause");
}