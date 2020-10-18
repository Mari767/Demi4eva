#include<iostream>
#include<math.h>
#include<stdio.h>

int main() 
{
	setlocale(LC_ALL, "Russian");
	printf(" Лабораторная работа №3    Вариант 7\n");
	double a, b, x, t1, t2;
	double ax;
	printf("Ведите x=");
	scanf_s("%lf", &x);

	a = 2, b = -2;
	ax = a * x;
	
	t1= 1 / (a * a * a)*(log(x) + 2 * b / x - b * b / 2*x * x);

    t2 = ( cos(a * x)) / (2 * a *  sin(a * x) * sin(a * x)) + 1 /( 2 * a) *  log(tan(a * x / 2));

	if (x = 0) 

		printf("\nt1 и t2 не имеют решений\n ", t1, t2);

	
	//else if (x < 0) {
	//	t1=1/(a*a*a)*(-2*b/x-b*b/2*x*x);
	//	printf("t1=%lf", t1);
	}



//	printf("\nt1=%lg, \nt2=%lg\n", t1, t2);
      
	

	//не равно 0 и больше 0
	

