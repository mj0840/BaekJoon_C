#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, n, k, num, count;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &n, &k);
		count = 0;
		for (int j = 0; j < n; j++) {
			scanf("%d", &num);
			count += num / k;
		}
		printf("%d\n", count);
	}
	return 0;
}