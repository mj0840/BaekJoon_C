#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, i, sum;
	scanf("%d %d", &a, &i);
	sum = a * (i - 1) + 1;
	printf("%d", sum);
	return 0;
}