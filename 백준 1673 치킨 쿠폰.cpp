#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, k, count;
	while (scanf("%d %d", &n, &k) != EOF) {
		count = n;
		while (n >= k) {
			int tmp = n % k;
			n /= k;
			count += n;
			n += tmp;
		}
		printf("%d\n", count);
	}
	return 0;
}