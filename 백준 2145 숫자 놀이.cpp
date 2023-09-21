#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, num[5];
	while (1) {
		scanf("%d", &n);
		if (n == 0) return 0;
		for (int i = 0; i < 5; i++) {
			num[i] = n % 10;
			n /= 10;
		}
		for (int i = 0; i < 5; i++) {
			n += num[i];
		}
		n = n / 10 + n % 10;
		if (n >= 10) n = n / 10 + n % 10;
		printf("%d\n", n);
	}
}