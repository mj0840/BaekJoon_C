#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int d1, d2;
	double sum = 0;
	scanf("%d %d", &d1, &d2);
	sum += 2 * d1 + 2 * d2 * 3.141592;
	printf("%lf", sum);
	return 0;
}