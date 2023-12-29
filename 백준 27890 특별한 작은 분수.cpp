#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, n, higher;
	scanf("%d %d", &x, &n);
	for (int i = 0; i < n; i++) {
		if (x % 2 == 0) {
			x = (x / 2) ^ 6;
		}
		else {
			x = (2 * x) ^ 6;
		}
	}
	printf("%d\n", x);
	return 0;
}