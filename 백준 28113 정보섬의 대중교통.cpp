#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	if (a == b) printf("Anything\n");
	if (a < b) printf("Bus\n");
	if (a > b) printf("Subway\n");
	return 0;
}