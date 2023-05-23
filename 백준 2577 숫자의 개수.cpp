#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, sum, cnt = 0, tmp;
	int count[10] = { 0 };
	scanf("%d %d %d", &a, &b, &c);
	sum = a * b * c;
	while (sum > 0) {
		count[sum % 10]++;
		sum /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", count[i]);
	}
	return 0;
}