#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, n, a, b, c, sum;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d %d %d", &a, &b, &c);
			if (a >= b && a >= c && a > 0) sum += a;
			else if (b >= a && b >= c && b > 0) sum += b;
			else if (c >= a && c >= b && c > 0) sum += c;
		}
		printf("%d\n", sum);
	}
	return 0;
}