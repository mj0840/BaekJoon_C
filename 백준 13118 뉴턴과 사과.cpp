#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, d;
	int x, y, r;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	scanf("%d %d %d", &x, &y, &r);
	if (x == a) printf("1");
	else if (x == b) printf("2");
	else if (x == c) printf("3");
	else if (x == d) printf("4");
	else printf("0");
	return 0;
}