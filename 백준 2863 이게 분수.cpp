#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, d, max = 0;
	double ncase[4] = { 0 };
	scanf("%d %d %d %d", &a, &b, &c, &d);
	ncase[0] = (double)a / c + (double)b / d;
	ncase[1] = (double)c / d + (double)a / b;
	ncase[2] = (double)d / b + (double)c / a;
	ncase[3] = (double)b / a + (double)d / c;
	for (int i = 1; i < 4; i++) {
		if (ncase[max] < ncase[i]) max = i;
	}
	printf("%d", max);
	return 0;
}