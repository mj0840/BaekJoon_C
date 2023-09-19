#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, plus, count;
	scanf("%d %d %d", &a, &b, &c);
	plus = c - b;
	if (plus <= 0) {
		printf("-1\n");
		return 0;
	}
	count = a / plus;
	if (plus) count++;
	printf("%d\n", count);
	return 0;
}