#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, a, b;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("%lld\n", (long long int)(a / b) * (a / b));
	}
	return 0;
}