#include <iostream>

int main()
{
	//  В принте  Введите значение а, б, ...
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	a = 3;
	b = 4;
	c = a;
	a = b;
	b = c;
	printf("%d\n %d\n", a, b);

	//  В принте  Введите значение а, б, ...
	b = a + b;
	a = b - a;
	b = b - a;
	printf("%d\n %d", a, b);



}