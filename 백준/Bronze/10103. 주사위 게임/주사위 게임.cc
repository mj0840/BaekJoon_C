#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, a, b, A = 100, B = 100;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (a > b) B -= a;
		if (a < b) A -= b;
	}
	printf("%d\n%d\n", A, B);
	return 0;
}