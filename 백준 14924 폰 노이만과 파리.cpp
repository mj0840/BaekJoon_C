#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int s, t, d;
	scanf("%d %d %d", &s, &t, &d);
	printf("%d", d / (s * 2) * t);
	return 0;
}