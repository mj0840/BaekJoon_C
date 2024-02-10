#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, n, m, tmp;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &n, &m);
		tmp = n - m;
		printf("%d %d\n", m - tmp, tmp);
	}
	return 0;
}