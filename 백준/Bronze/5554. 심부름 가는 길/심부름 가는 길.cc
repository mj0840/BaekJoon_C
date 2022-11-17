#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t1, t2, t3, t4, x, y;
	scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
	y = t1 + t2 + t3 + t4;
	x = y / 60;
	y %= 60;
	printf("%d\n%d\n", x, y);
	return 0;
}