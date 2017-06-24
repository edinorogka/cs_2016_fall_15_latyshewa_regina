#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



float func(float x)
{
	return x*x*x;
}
void func1(float k, float result, float a, float b, float n){
	float h;
	float x;
	float p;
	float p1;
	float p2;
	float i;
	float end;
	i = (b - a) / (2 * n);
	h = (b - a) / (2 * n);
	p = (h / 3)*(func(a) + func(b));
	while (b > a + 2 * k*i || b>a + (2 * k + 1)*i)
	{
		p1 = (2 * h / 3)*(func(a + 2 * k*i));
		p2 = (4 * h / 3)*(func(a + i*(2 * k + 1)));
		k = k + 1.0;
		result = result + p1 + p2;
	}
	end = p + result;
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	float h = 1.0, n = 8.0, x = 7.0, p = 0.0, a = 1.0, b =9.0, p1 = 0.0, p2 = 4.0, result = 0.0, i = 0.0, k = 1.0, end = 6.0;
	func1(result, k, a, b, n);
	printf("Ответ:=%f\n", end);

	return 0;
}
