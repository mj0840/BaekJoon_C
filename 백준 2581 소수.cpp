#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int m, n, sum = 0, min = 0;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++) {
		if (i == 1) continue;
		int count = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) count++;
		}
		if (count == 0) {
			if (sum == 0) min = i;
			sum += i;
		}
	}
	if (sum == 0) printf("-1\n");
	else printf("%d\n%d\n", sum, min);
	return 0;
}