#include<stdio.h>
int main()
{
	int i, j, x, z, num;
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++) {
		for (j = num; j >= i; j--) {
			printf(" ");
		}

		for (x = 1; x < i; x++) {
			printf("*");
		}
		for (z = 1; z <= i; z++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
