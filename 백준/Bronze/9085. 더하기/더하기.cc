#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, n, num, sum;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &num);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return 0;
}