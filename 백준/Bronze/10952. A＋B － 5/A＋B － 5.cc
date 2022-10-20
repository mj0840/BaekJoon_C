#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, a, b, sum[10000];
	for (i = 0; i < 10000; i++) {
		scanf("%d %d", &a, &b);
		sum[i] = a + b;
		if (a == 0 && b == 0) {
			break;
		}
	}
	for (int j = 0; j < i; j++) {
		printf("%d\n", sum[j]);
	}
	return 0;
}