#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int r, c, n;
	long long int length, width;
	scanf("%d %d %d", &r, &c, &n);
	if (r % n > 0) length = r / n + 1;
	else length = r / n;
	if (c % n > 0) width = c / n + 1;
	else width = c / n;
	printf("%lld", (length * width));
	return 0;
}