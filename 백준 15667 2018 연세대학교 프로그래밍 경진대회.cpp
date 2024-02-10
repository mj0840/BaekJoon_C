#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	n -= 1;
	int i = 1;
	while (1) {
		if (i * i + i == n) break;
		i++;
	}
	printf("%d\n", i);
	return 0;
}