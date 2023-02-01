#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, a, b, c, d, e;
	double sum[10000] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
		sum[i] += a * 350.34;
		sum[i] += b * 230.90;
		sum[i] += c * 190.55;
		sum[i] += d * 125.30;
		sum[i] += e * 180.90;
	}
	for (int i = 0; i < n; i++) {
		printf("$%.2lf\n", sum[i]);
	}
}