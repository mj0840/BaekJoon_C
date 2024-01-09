#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, date, count = 0;
	scanf("%d ", &n);
	for (int i = 0; i < n; i++) {
		scanf(" D-%d", &date);
		if (date <= 90) count++;
	}
	printf("%d\n", count);
	return 0;
}