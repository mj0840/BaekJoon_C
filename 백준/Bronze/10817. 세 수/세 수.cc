#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c) printf("%d", a);
	else if (a == b) printf("%d", a);
	else if (b == c) printf("%d", b);
	else if (c == a) printf("%d", c);
	else if (a > b && a > c) printf("%d", b > c ? b : c);
	else if (b > a && b > c) printf("%d", a > c ? a : c);
	else if (c > a && c > b) printf("%d", a > b ? a : b);
	return 0;
}