#include <stdio.h>

int main(){
	int n, sum3 = 0, cnt3 = 0, sum5 = 0, cnt5 = 0;

	scanf_s("%d", &n);
	printf("3의 배수: ");
	for (int i = 1; i <= n; i++){
		if (sum3 + i > 100){
			break;
		}
		if (i % 3 == 0){
			cnt3++;
			sum3 += i;
			if (cnt3 > 1)printf(" + ");
			printf("%d", i);
		}
	}

	printf(" = %d (%d회)\n", sum3, cnt3);

	printf("5의 배수: ");
	for (int i = 1; i <= n; i++){
		if (sum5 + i > 100){
			break;
		}
		if (i % 5 == 0){
			cnt5++;
			sum5 += i;
			if (cnt5 > 1)printf(" + ");
			printf("%d", i);
		}
	}
	printf(" = %d (%d회)\n", sum5, cnt5);

}