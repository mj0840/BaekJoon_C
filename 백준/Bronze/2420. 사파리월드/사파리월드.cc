#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	long int n, m;
	scanf("%ld %ld", &n, &m);
	if (n - m >= 0) printf("%ld\n", n - m);
	else printf("%ld\n", (n - m) * (-1));
	return 0;
}