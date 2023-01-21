#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, tmp;
	long long int sum = 2;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		tmp = sum - 1;
		sum += tmp;
	}
	printf("%lld", sum * sum);
	return 0;
}