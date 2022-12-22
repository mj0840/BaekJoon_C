#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, cnt;
	scanf("%d %d", &n, &m);
	cnt = n < m ? n : m;
	printf("%d", cnt / 2);
	return 0;
}