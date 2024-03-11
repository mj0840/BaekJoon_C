#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	double m;
	scanf("%lf", &m);
	if (m <= 30) m /= 2;
	else m = 15 + (m - 30) / 2 * 3;
	printf("%.1lf\n", m);
	return 0;
}