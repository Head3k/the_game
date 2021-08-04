#include<stdio.h>

int input(int enter);

int main() {
	int enter = 0;
	enter = input(enter);
	printf("%d", enter);
	return 0;
}

int input(int enter) {
	int check_i = 0;
	char check_c = ' ';
	check_i = scanf("%d%c", &enter, &check_c);
	return 0;
}
