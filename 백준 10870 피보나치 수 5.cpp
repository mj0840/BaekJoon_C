#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, first = 0, second = 1;
	int sum = first + second;
	scanf("%d", &n);
	if (n == 0) {
		printf("0\n");
		return 0;
	}
	if (n == 1) {
		printf("1\n");
		return 0;
	}
	for (int i = 2; i < n; i++) {
		first = second;
		second = sum;
		sum = first + second;
	}
	printf("%d\n", sum);
	return 0;
}