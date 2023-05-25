#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int number(int n) {
	int num[3];
	num[0] = n % 10;
	num[1] = n / 10 % 10;
	num[2] = n / 100;
	n = num[0] * 100 + num[1] * 10 + num[2];
	return n;
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	a = number(a);
	b = number(b);
	if (a > b) printf("%d\n", a);
	else printf("%d\n", b);
	return 0;
}