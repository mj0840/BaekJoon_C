#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int jooche, bojoche, n1, n2, n3;
	scanf("%d %d", &jooche, &bojoche);
	n1 = jooche * (bojoche % 10 % 10);
	n2 = jooche * (bojoche / 10 % 10);
	n3 = jooche * (bojoche / 10 / 10);
	printf("%d\n%d\n%d\n%d", n1, n2, n3, n1 + n2 * 10 + n3 * 100);
	return 0;
}