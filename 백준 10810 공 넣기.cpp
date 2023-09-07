#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, i, j, k;
	int basket[100] = { 0 };
	scanf("%d %d", &n, &m);
	for (int a = 0; a < m; a++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int b = i; b <= j; b++) {
			basket[b - 1] = k;
		}
	}
	for (int a = 0; a < n; a++) {
		printf("%d ", basket[a]);
	}
	return 0;
}