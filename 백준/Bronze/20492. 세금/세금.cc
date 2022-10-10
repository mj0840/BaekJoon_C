#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", n / 100 * 78);
	printf("%d\n", n / 5 * 4 + n / 5 / 100 * 78);
	return 0;
}