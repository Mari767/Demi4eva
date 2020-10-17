

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	
	//через if else.... сделать что бы при 2 не было нулей, а при дробях были.
	
	printf("Введите число a, что бы вознести его в восьмую степень.\n a=");
	scanf_s("%lf", &a);

	b = a * a;
	b = b * b;
	b = b * b;
	printf("%lf в восьмой степени равно %lf", a, b);

	return 0;


}