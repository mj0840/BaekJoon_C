#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int m, d, sum;
	scanf("%d %d", &m, &d);
	sum = m * 30 + d;
	if (sum == 78) printf("Special");
	else if (sum < 78) printf("Before");
	else printf("After");
	return 0;
}