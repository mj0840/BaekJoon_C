#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, a, b, sum;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		sum = 0;
		if (a == 1) sum += 500;
		if (a == 2 || a == 3) sum += 300;
		if (a >= 4 && a <= 6) sum += 200;
		if (a >= 7 && a <= 10) sum += 50;
		if (a >= 11 && a <= 15) sum += 30;
		if (a >= 16 && a <= 21) sum += 10;
		if (b == 1) sum += 512;
		if (b == 2 || b == 3) sum += 256;
		if (b >= 4 && b <= 7) sum += 128;
		if (b >= 8 && b <= 15) sum += 64;
		if (b >= 16 && b <= 31) sum += 32;
		sum *= 10000;
		printf("%d\n", sum);
	}
	return 0;
}