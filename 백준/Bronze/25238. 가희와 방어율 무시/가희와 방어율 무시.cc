#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b;
	double num;
	scanf("%d %d", &a, &b);
	num = (double)a - (double)a / 100 * (double)b;
	printf("%d", num < 100 ? 1 : 0);
	return 0;
}