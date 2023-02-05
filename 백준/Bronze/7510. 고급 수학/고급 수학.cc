#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, a, b, c, max;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		max = a > b ? (a > c ? a : (c > b ? c : b)) : (b > c ? b : (c > a ? c : a));
		if (a == max) {
			printf("Scenario #%d:\n", i + 1);
			if (b * b + c * c == a * a) printf("yes\n\n");
			else printf("no\n\n");
		}
		if (b == max) {
			printf("Scenario #%d:\n", i + 1);
			if (a * a + c * c == b * b) printf("yes\n\n");
			else printf("no\n\n");
		}
		if (c == max) {
			printf("Scenario #%d:\n", i + 1);
			if (a * a + b * b == c * c) printf("yes\n\n");
			else printf("no\n\n");
		}
	}
	return 0;
}