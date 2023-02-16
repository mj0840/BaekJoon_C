#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, d, sum, tmp;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &d);
		sum = 0;
		for (int j = 0; j <= 10000; j++) {
			sum = j + j * j;
			if (sum > d) {
				printf("%d\n", j - 1);
				break;
			}
		}
	}
	return 0;
}