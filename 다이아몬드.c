#include <stdio.h>

int main () {
	int num, i, j;
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		for (j = 1; j <= num - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= i * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = num - 1; i >= 1; i--) {
		for (j = 1; j <= num - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= i * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}