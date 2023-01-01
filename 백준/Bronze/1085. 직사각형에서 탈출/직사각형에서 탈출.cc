#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, y, w, h, com_x, com_y;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	com_x = w - x;
	com_y = h - y;
	if (com_x > x) com_x = x;
	if (com_y > y) com_y = y;
	if (com_x < com_y) printf("%d", com_x);
	else printf("%d", com_y);
	return 0;
}