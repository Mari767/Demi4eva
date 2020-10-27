#include<iostream>
#include<math.h>
#include<stdio.h>

int main(void) {
	setlocale(LC_ALL, "Russian");

	double a, b, x, t1, t2;
	double ax;
	printf("Ведите x=");
	scanf_s("%lf", &x);

	a = 2, b = -2;
	ax = a * x;

	t1 = 1 / (a * a * a) * (log(x) + 2 * b / x - b * b / (2 * x * x));

	t2 = cos(ax) / (2 * a * sin(ax) * sin(ax)) + 1 / (2 * a) * log(ax / 2);

	printf("\nt1=%lg, \nt2=%lg\n", t1, t2);
}
