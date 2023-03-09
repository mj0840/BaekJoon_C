#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, n, m, sum;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &n, &m);
		if (n < 12 || m < 4) printf("-1\n");
		else printf("%d\n", 11 * m + 4);
	}
	return 0;
}