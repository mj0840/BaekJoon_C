#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, n, a, b;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d %d", &a, &b);
			printf("%d %d\n", a + b, a * b);
		}
	}
	return 0;
}