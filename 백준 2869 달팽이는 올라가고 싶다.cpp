#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, v, cnt;
	scanf("%d %d %d", &a, &b, &v);
	cnt = (v - b - 1) / (a - b) + 1;
	printf("%d\n", cnt);
	return 0;
}