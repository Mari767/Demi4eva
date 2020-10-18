#include<stdio.h>
#include<iostream>
int main(){
	//setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");
char name1[9], name2[9], name3[9];
char typ1[3], typ2[3], typ3[3];
int  nom1, nom2;
double nom3;
unsigned short qua1, qua2, qua3;

//Введение фактических данных
printf("1. Введите обозначение, тип, номинал, количество >");	
scanf_s("%s %c %d %hu", name1,9, typ1,3, &nom1, &qua1);
printf("2. Введите обозначение, тип, номинал, количество >");
scanf_s("%s %c %d %hu", name2,9, typ2,3, &nom2, &qua2);
printf("3. Введите обозначение, тип, номинал, количество >");
scanf_s("%s %c %lf %hu", name3,9, typ3,3, &nom3, &qua3);

//Вывод таблицы 9 5  9 12
// вывод заголовков
printf("___________________________________________\n");
printf("|Ведомость комплектующих                   |\n");
printf("|__________________________________________|\n");
printf("| Обозначение | Тип | Номинал | Количество |\n");
printf("|_____________|_____|_________|____________|\n");

// вывод строк фактических данных 
printf("| %9s   |  %c  | %d  |   %2hu       |\n", name1, typ1, nom1, qua1);
printf("| %9s   |  %c  | %d   |    %2hu      |\n", name2, typ2, nom2, qua2);
printf("| %9s   |  %c  | %.1lf    |    %1hu       |\n", name3, typ3, nom3, qua3);
  
//вывод примечаний 
printf("|__________________________________________|\n");
printf("|Примечание: R - резистор; C - конденсатор |\n");
printf("|__________________________________________|\n");
return 0;
}

