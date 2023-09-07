#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, i, j;
	int basket[100];
	scanf("%d %d", &n, &m);
	for (int a = 0; a < n; a++) {
		basket[a] = a + 1;
	}
	for (int a = 0; a < m; a++) {
		scanf("%d %d", &i, &j);
		int tmp = basket[i - 1];
		basket[i - 1] = basket[j - 1];
		basket[j - 1] = tmp;
	}
	for (int a = 0; a < n; a++) {
		printf("%d ", basket[a]);
	}
	return 0;
}