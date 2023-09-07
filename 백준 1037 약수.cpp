#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, num, max = 1, min = 1000001;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num < min) min = num;
		if (num > max) max = num;
	}
	printf("%d\n", min * max);
	return 0;
}