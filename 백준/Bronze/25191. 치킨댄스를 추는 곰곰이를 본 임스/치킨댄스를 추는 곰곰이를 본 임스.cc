#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, a, b, home;
	scanf("%d %d %d", &n, &a, &b);
	home = a / 2 + b;
	if (n > home) printf("%d", home);
	else printf("%d", n);
	return 0;
}