#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float func(float x)
{
	return x*x;
}

void func1 (float h = 0.0, float x = 0.0, float p = 0.0, float a = 0.0, float b = 0.0, float p1 = 0.0, float p2 = 0.0)
{
	x = a;
	p1 = ((-3) * func(x) + 4 * (func(x + h)) - (func(x + 2 * h))) / (2 * h);
	p2 = (1 / (2 * h))*(-func(x) + func(x + 2 * h));
	while (x + 2 * h <= b)
	{
		p = (1 / (2 * h))*(func(x) - 4 * (func(x + h)) + 3 * (func(x + 2 * h)));
		x = x + h;
		printf("%f\n", p);
	}
}

int main()
{
	float p2 = 0.0;
	float p1 = 0.0;
	float h = 0.0;
	float b = 0.0;
	float a = 0.0;
	setlocale(LC_CTYPE, "Russian");
	printf("Введите нижнюю границу:");
	scanf("%f", &a);
	printf("Введите верхнюю границу:");
	scanf("%f", &b);
	printf("Введите шаг:");
	scanf("%f", &h);
	printf("%f\n", p1);
	printf("%f\n", p2);
	func1(h, a, b);
	return 0;
}

