#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int total, sum = 0, n;
	scanf("%d", &total);
	for (int i = 0; i < 9; i++) {
		scanf("%d", &n);
		sum += n;
	}
	printf("%d", total - sum);
	return 0;
}