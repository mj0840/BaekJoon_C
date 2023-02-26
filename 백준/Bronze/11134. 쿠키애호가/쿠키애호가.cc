#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, n, c, sum;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &n, &c);
		sum = n / c;
		if (n % c != 0) sum++;
		printf("%d\n", sum);
	}
	return 0;
}