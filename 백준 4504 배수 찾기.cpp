#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, tmp;
	scanf("%d", &n);
	while (1) {
		scanf("%d", &tmp);
		if (tmp == 0) return 0;
		if (tmp % n == 0) printf("%d is a multiple of %d.\n", tmp, n);
		else printf("%d is NOT a multiple of %d.\n", tmp, n);
	}
}