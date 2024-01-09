#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, sum[3] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		sum[0] += i + 1;
	}
	sum[1] = sum[0];
	sum[1] *= sum[1];
	for (int i = 0; i < n; i++) {
		int tmp = i + 1;
		for (int j = 0; j < 2; j++) {
			tmp *= (i + 1);
		}
		sum[2] += tmp;
	}
	printf("%d\n%d\n%d\n", sum[0], sum[1], sum[2]);
	return 0;
}