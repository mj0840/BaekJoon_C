#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, count;
	scanf("%d %d", &a, &b);
	if (a > b) count = b * 2 + 1;
	else count = a * 2 - 1;
	printf("%d", count);
	return 0;
}