#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Russian");
	const int SIZE = 15;
char name1[SIZE], name2[SIZE], name3[SIZE];
char typ1, typ2, typ3;
int  nom1, nom2;
float nom3;
 int qua1, qua2, qua3;
 printf(" Лабораторноя работа №2    Вариант 7\n");
//Введение фактических данных
printf("\n1. Введите обозначение, тип, номинал, количество >");	
scanf("%s %c %d %d", name1,SIZE, &typ1, &nom1, &qua1);
printf("2. Введите обозначение, тип, номинал, количество >");
scanf("%s %c %d %d", name2,SIZE, &typ2, &nom2, &qua2);
printf("3. Введите обозначение, тип, номинал, количество >");
scanf("%s %c %f %d", name3,SIZE, &typ3, &nom3, &qua3);

//Вывод таблицы 
// вывод заголовков
printf("___________________________________________\n");
printf("|Ведомость комплектующих                   |\n");
printf("|__________________________________________|\n");
printf("| Обозначение | Тип | Номинал | Количество |\n");
printf("|_____________|_____|_________|____________|\n");

// вывод строк фактических данных 
printf("| %-9s | %c | %d | %d |\n", name1, typ1, nom1, qua1);
printf("| %-9s | %c | %d | %d |\n", name2, typ2, nom2, qua2);
printf("| %-1s | %c | %2.1f | %d |\n", name3, typ3, nom3, qua3);
     
//вывод примечаний 
printf("|__________________________________________|\n");
printf("|Примечание: R - резистор; C - конденсатор |\n");
printf("|__________________________________________|\n");
return 0;
}

