#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, a, d, g, sum, point = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &d, &g);
		if (a == d + g) sum = 2 * (a * (d + g));
		else sum = a * (d + g);
		if (point < sum) point = sum;
	}
	printf("%d", point);
	return 0;
}