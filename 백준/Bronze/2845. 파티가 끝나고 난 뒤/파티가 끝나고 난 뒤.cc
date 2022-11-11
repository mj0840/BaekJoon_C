#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int L, P, n1, n2, n3, n4, n5, sang;
	scanf("%d %d\n%d %d %d %d %d", &L, &P, &n1, &n2, &n3, &n4, &n5);
	sang = L * P;
	n1 -= sang;
	n2 -= sang;
	n3 -= sang;
	n4 -= sang;
	n5 -= sang;
	printf("%d %d %d %d %d\n", n1, n2, n3, n4, n5);
	return 0;
}