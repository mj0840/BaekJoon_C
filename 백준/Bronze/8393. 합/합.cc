#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	long long int sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%lld", sum);
	return 0;
}