#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, a, b, tmp, max, min;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		if (b > a) {
			tmp = b;
			b = a;
			a = tmp;
		}
		max = 1;
		for (int i = 2; i <= b; i++) {
			if (a % i == 0 && b % i == 0) max = i;
		}
		for (int i = 1; max * i <= a * b; i++) {
			if (max * i % a == 0 && max * i % b == 0) {
				min = max * i;
				break;
			}
		}
		printf("%d %d\n", min, max);
	}
	return 0;
}