#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, time_count = 0;
	scanf("%d", &n);
	while (n > 0) {
		for (int i = 1; i <= n; i++) {
			n -= i;
			time_count++;
		}
	}
	printf("%d\n", time_count);
	return 0;
}