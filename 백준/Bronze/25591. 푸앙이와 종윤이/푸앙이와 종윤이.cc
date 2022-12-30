#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num1, num2;
	int a, b, c, d, q = 0, r;
	scanf("%d %d", &num1, &num2);
	a = 100 - num1;
	b = 100 - num2;
	c = 100 - (a + b);
	d = a * b;
	if (d >= 100) {
		q = d / 100;
		r = d % 100;
		printf("%d %d %d %d %d %d\n", a, b, c, d, q, r);
		c += q;
		printf("%d %d", c, r);
	}
	else {
		r = d;
		printf("%d %d %d %d %d %d\n%d %d", a, b, c, d, q, r, c, r);
	}
	return 0;
}