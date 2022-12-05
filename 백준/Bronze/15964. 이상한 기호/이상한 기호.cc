#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	long long int a, b, sum;
	scanf("%lld %lld", &a, &b);
	sum = (a + b) * (a - b);
	printf("%lld", sum);
	return 0;
}