#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
float func(float x)
{
	return 4;
}
float x;
void func1(float h, float a, float b)
{
	float p;
	float p1;
	float p2;
	float x;
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
	float h = 1.0;
	float b = 10.0;
	float a = 0.0;
	setlocale(LC_CTYPE, "Russian");
	func1(h, a, b);
	printf("%f\n", func(x));
	return 0;
}
