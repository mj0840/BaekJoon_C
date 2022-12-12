#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	printf("%d %d", k / m, k % m);
	return 0;
}