#include<stdio.h>

#define NMAX 550

char input(char *enter);

int main() {
	char enter[NMAX];
	input(enter);
	printf("%s", enter);
	return 0;
}

char input(char *enter) {
	int check_i = 0;
	//char check_c = ' ';
	check_i = scanf("%s", enter);
	return *enter;
}
