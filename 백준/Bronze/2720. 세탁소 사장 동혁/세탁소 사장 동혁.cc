#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, num;
	int Q, D, N, P;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		Q = num / 25; num %= 25;
		D = num / 10; num %= 10;
		N = num / 5; num %= 5;
		P = num;
		printf("%d %d %d %d\n", Q, D, N, P);
	}
	return 0;
}