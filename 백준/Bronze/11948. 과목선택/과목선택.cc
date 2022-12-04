#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, d, e, f;
	int point_1 = 0, point_2 = 0;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	if (a <= b && a <= c && a <= d) point_1 += b + c + d;
	else if (b <= a && b <= c && b <= d) point_1 += a + c + d;
	else if (c <= a && c <= b && c <= d) point_1 += a + b + d;
	else point_1 += a + b + c;
	if (e <= f) point_2 += f;
	else point_2 += e;
	printf("%d", point_1 + point_2);
	return 0;
}