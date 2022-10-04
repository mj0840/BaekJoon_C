#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int k, q, l, v, n, f;
	scanf("%d %d %d %d %d %d", &k, &q, &l, &v, &n, &f);
	printf("%d %d %d %d %d %d", 1 - k, 1 - q, 2 - l, 2 - v, 2 - n, 8 - f);
	return 0;
}