#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, a, b, num;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		num = a + b;
		printf("Case #%d: %d + %d = %d\n", i + 1, a, b, num);
	}
	return 0;
}