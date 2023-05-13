#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, k, sum;
	scanf("%d %d %d", &n, &m, &k);
	if (m > k) sum = m - k;
	else sum = k - m;
	printf("%d", n - sum);
	return 0;
}