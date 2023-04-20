#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	n *= 100;
	if (n >= m) printf("Yes");
	else printf("No");
	return 0;
}