#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.32lf", (double)a / (double)b);
	return 0;
}