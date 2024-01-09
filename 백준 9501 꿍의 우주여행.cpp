#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, n, d, v, f, c, count;
	double sum;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &n, &d);
		count = 0;
		for (int j = 0; j < n; j++) {
			scanf("%d %d %d", &v, &f, &c);
			sum = (double)v / c * f;
			if (sum >= d) count++;
		}
		printf("%d\n", count);
	}
	return 0;
}