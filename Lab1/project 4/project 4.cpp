#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	
	//  В принте  Введите значение а, б, ...
	
	int a, b, c;
	printf("Способ обмена местами значения 2-х переменных через дополнительную переменную \n");
	printf("Введите значения а и b\n");
	
	printf("a=");
	scanf_s("%d", &a);
	printf("b=");
	scanf_s("%d", &b);
	
	c = a;
	a = b;
	b = c;
	printf("\n a=%d\n b=%d\n", a, b);

	printf("\n Способ обмена местами значения 2-х переменных не используя дополнительной переменной");

	//  В принте  Введите значение а, б, ...
	b = a + b;
	a = b - a;
	b = b - a;
	printf("%d\n %d", a, b);



}