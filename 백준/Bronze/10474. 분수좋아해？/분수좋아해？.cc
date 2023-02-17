#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, tmp, sum;
	for (int i = 0; i < 2 ^ 31 - 1; i++) {
		scanf("%d %d", &a, &b);
		if (a == b && b == 0) return 0;
		tmp = a / b;
		sum = a % b;
		printf("%d %d / %d\n", tmp, sum, b);
	}
}