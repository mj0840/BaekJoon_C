#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, x, a[100000], min = 2000;
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		int tmp = a[i] + a[i + 1];
		if (min > tmp) min = tmp;
	}
	printf("%d\n", x * min);
	return 0;
}