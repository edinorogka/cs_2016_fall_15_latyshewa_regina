#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



float func(float x)
{
	return x*x*x;
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float h = 0.0, n = 0.0, x = 0.0, p = 0.0, a = 0.0, b = 0.0, p1 = 0.0, p2 = 0.0, result = 0.0, i = 0.0, k = 1.0, end = 0.0;

	printf("Введите нижнюю границу:");
	scanf("%f", &a);
	printf("Введите верхнюю границу:");
	scanf("%f", &b);
	printf("Введите точность (min=1, max=100000):");
	scanf("%f", &n);
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
	printf("Ответ:=%f\n", end);

	return 0;
}

