#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, n_;
	scanf("%d", &n);
	n_ = n;
	for (int i = 2; i <= n_; i) {
		if (n == 1) return 0;
		if (n % i != 0) {
			i++;
			continue;
		}
		printf("%d\n", i);
		n /= i;
	}
}