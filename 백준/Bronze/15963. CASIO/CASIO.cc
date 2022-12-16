#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	long long int n1, n2;
	scanf("%lld %lld", &n1, &n2);
	if (n1 == n2) printf("1");
	else printf("0");
	return 0;
}