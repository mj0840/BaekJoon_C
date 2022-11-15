#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int l, b, a, c, d, kor, mat;
	scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
	mat = b % d == 0 ? b / d : b / d + 1;
	kor = a % c == 0 ? a / c : a / c + 1;
	if (mat >= kor) printf("%d\n", l - mat);
	else printf("%d\n", l - kor);
	return 0;
}