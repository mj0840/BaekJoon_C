#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, a, b, c, sum[100];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (a <= b && a <= c) sum[i] = a;
		else if (b <= a && b <= c) sum[i] = b;
		else sum[i] = c;
	}
	for (int i = 0; i < t; i++) {
		printf("%d\n", sum[i]);
	}
	return 0;
}