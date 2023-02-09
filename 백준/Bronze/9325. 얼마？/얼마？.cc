#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num, sum, n, p, q;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d %d", &sum, &n);
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &p, &q);
			sum += (p * q);
		}
		printf("%d\n", sum);
	}
	return 0;
}