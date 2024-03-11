#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	long long int n, first = 0, second = 1;
	scanf("%lld", &n);
	for (int i = 1; i < n; i++) {
		long long int tmp = second;
		second += first;
		first = tmp;
	}
	printf("%lld\n", second);
	return 0;
}