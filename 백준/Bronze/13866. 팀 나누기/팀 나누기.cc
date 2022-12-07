#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, d, t1 = 0, t2 = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	t1 += a > b ? (a > c ? (a > d ? a : d) : (c > d ? c : d)) : (b > c ? (b > d ? b : d) : (c > d ? c : d));
	t1 += a < b ? (a < c ? (a < d ? a : d) : (c < d ? c : d)) : (b < c ? (b < d ? b : d) : (c < d ? c : d));
	t2 += a + b + c + d - t1;
	if (t1 >= t2) printf("%d", t1 - t2);
	else printf("%d", t2 - t1);
	return 0;
}