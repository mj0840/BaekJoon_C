#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	n %= 8;
	if (n == 1) printf("1");
	if (n == 2 || n == 0) printf("2");
	if (n == 3 || n == 7) printf("3");
	if (n == 4 || n == 6) printf("4");
	if (n == 5) printf("5");
	return 0;
}