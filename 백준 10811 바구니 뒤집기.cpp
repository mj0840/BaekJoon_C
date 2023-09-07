#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, i, j;
	int basket[100], tmp[100] = { 0 };
	scanf("%d %d", &n, &m);
	for (int a = 0; a < n; a++) {
		basket[a] = a + 1;
	}
	for (int a = 0; a < m; a++) {
		scanf("%d %d", &i, &j);
		for (int b = i; b <= j; b++) {
			tmp[b - 1] = basket[b - 1];
		}
		int b = i, c = j;
		while (b <= j && c >= i) {
			basket[c - 1] = tmp[b - 1];
			b++;
			c--;
		}
	}
	for (int a = 0; a < n; a++) {
		printf("%d ", basket[a]);
	}
	return 0;
}