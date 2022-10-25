#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, num;
	scanf("%d %d", &a, &b);
	num = b - a;
	printf("%d %d", num, b);
	return 0;
}