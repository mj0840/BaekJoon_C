#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int str, dex, _int, luk, n, total;
	scanf("%d %d %d %d %d", &str, &dex, &_int, &luk, &n);
	total = str + dex + _int + luk;
	n *= 4;
	if (total >= n) printf("0\n");
	else printf("%d\n", n - total);
	return 0;
}