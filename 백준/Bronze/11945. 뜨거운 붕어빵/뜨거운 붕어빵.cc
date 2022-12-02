#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int area[10][10];
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &area[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = m - 1; j >= 0; j--) {
			printf("%d", area[i][j]);
		}
		printf("\n");
	}
	return 0;
}