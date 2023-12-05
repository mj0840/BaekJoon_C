#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, k, i, j, x, y, arr[300][300], sum;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &k);
	for (int a = 0; a < k; a++) {
		scanf("%d %d %d %d", &i, &j, &x, &y);
		sum = 0;
		for (int b = i - 1; b < x; b++) {
			for (int c = j - 1; c < y; c++) {
				sum += arr[b][c];
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}