#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	printf("%s\n", n % 2 ? "CY" : "SK");
	return 0;
}