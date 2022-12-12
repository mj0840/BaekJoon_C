#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, length;
	scanf("%d", &t);
	if (t % 5 != 0) length = t / 5 + 1;
	else length = t / 5;
	printf("%d", length);
	return 0;
}