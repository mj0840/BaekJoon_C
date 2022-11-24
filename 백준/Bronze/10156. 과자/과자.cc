#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int k, n, m, price = 0;
	scanf("%d %d %d", &k, &n, &m);
	price = k * n;
	if (price > m) printf("%d", price - m);
	else printf("0");
	return 0;
}