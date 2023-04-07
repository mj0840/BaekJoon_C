#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c;
	long long int n1, n2;
	scanf("%d %d %d", &a, &b, &c);
	n1 = a * (double)b / c;
	n2 = (double)a / b * c;
	printf("%lld", n1 > n2 ? n1 : n2);
	return 0;
}