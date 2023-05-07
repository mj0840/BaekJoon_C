#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, w = 1, h = 1;
	scanf("%d", &n);
	if (n % 2 == 0) {
		w += n / 2;
		h += n / 2;
	}
	if (n % 2 == 1) {
		w += n / 2 + 1;
		h += n / 2;
	}
	printf("%d", w * h);
	return 0;
}