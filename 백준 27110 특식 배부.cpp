#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, a, b, c, tmp, cnt = 0;
	scanf("%d %d %d %d", &n, &a, &b, &c);
	tmp = n - a;
	if (tmp < 0) cnt += n;
	else cnt += n - tmp;
	tmp = n - b;
	if (tmp < 0) cnt += n;
	else cnt += n - tmp;
	tmp = n - c;
	if (tmp < 0) cnt += n;
	else cnt += n - tmp;
	printf("%d\n", cnt);
	return 0;
}