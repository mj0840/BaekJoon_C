#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, d;
	for (int i = 0; i < 100000000; i++) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if (a == b && b == c && c == d && d == 0) return 0;
		printf("%d %d\n", c - b, d - a);
	}
}