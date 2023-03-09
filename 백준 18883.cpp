#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, cnt = 1;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d", cnt++);
			if (j != m - 1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}