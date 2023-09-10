#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int number, count = 0, num = 64;
	scanf("%d", &number);
	while (number != 0) {
		if (number >= num) {
			number -= num;
			count++;
		}
		num /= 2;
	}
	printf("%d\n", count);
	return 0;
}