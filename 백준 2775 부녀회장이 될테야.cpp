#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int apart[15][15] = { 0 };
	int t, k, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &k, &n);
		for (int j = 0; j <= n; j++) {
			apart[0][j] = j;
		}
		for (int j = 1; j <= k; j++) {
			for (int l = 1; l <= n; l++) {
				apart[j][l] = apart[j - 1][l] + apart[j][l - 1];
			}
		}
		printf("%d\n", apart[k][n]);
	}
	return 0;
}