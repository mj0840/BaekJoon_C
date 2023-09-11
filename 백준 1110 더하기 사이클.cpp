#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, front, back, count = 0, sum, tmp;
	scanf("%d", &n);
	sum = n;
	do {
		front = sum / 10;
		back = sum % 10;
		tmp = (front + back) % 10;
		sum = back * 10 + tmp;
		count++;
	} while (sum != n);
	printf("%d\n", count);
	return 0;
}