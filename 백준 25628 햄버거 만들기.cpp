#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, sum;
	scanf("%d %d", &a, &b);
	sum = a / 2 <= b ? a / 2 : b;
	printf("%d", sum);
	return 0;
}