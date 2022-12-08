#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, sum, chicken;
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b;
	chicken = c * 2;
	if (sum >= chicken) printf("%d", sum - chicken);
	else printf("%d", sum);
	return 0;
}