#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, d, p, x, y;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);
	x = a * p;
	if (p <= c) y = b;
	else y = b + d * (p - c);
	if (x < y) printf("%d", x);
	else printf("%d", y);
	return 0;
}