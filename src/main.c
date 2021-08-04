#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NMAX 550

char enter[NMAX]; 
void menu();
void input();
void output();
int flag = 0;

int main() {
	menu();
	//printf("%s\n", enter);     // проверка вывода, потом можно удалить
	return 0;
}

void menu() {
	while (flag < 10) {
		input(enter);                // вызов функции для ввода строки
		output();
	}
}

void input(char *enter) {
	scanf("%s", enter);      	// ввод строки
}

void output() {
	srand(time(NULL));
	int answer = rand() % 10;
	switch (answer) {
	case 0:
		an_0();
		menu();
		break;
	case 1:
		an_1();
		menu();
		break;
	case 2:
		an_2();
		menu();
		break;
	case 3:
		an_3();
		menu();
		break;
	case 4:
		an_4();
		menu();
		break;
	case 5:
		an_5();
		menu();
		break;
	case 6:
		an_6();
		menu();
		break;
	case 7:
		an_7();
		menu();
		break;
	case 8:
		an_8();
		menu();
		break;
	case 9:
		an_9();
		menu();
		break;
	default:
		break;
	}
	flag++;
}