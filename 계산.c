#include <stdio.h>

int main(void) {
	int a;
	int b;
	scanf_s("%d %d", &a, &b);
	printf("%d + %d = %d\n",a,b,a+b );
	printf("%d - %d = %d\n",a,b,a-b );
	printf("%d * %d = %d\n",a,b,a*b );
	printf("%d / %d = %d\n",a,b,a/b);
	printf("%d %% %d = %d\n",a,b,a%b );
}