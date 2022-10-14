#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int sum = 0;
	int n[5];
	scanf("%d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4]);
	for (int i = 0; i < 5; i++) {
		sum += (n[i] * n[i]);
	}
	printf("%d", sum % 10);
	return 0;
}