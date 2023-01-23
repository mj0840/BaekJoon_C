#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x[4], y[4];
	scanf("%d %d %d %d %d %d", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2]);
	if (x[0] == x[1]) x[3] = x[2];
	if (x[0] == x[2]) x[3] = x[1];
	if (x[1] == x[2]) x[3] = x[0];
	if (y[0] == y[1]) y[3] = y[2];
	if (y[0] == y[2]) y[3] = y[1];
	if (y[1] == y[2]) y[3] = y[0];
	printf("%d %d", x[3], y[3]);
	return 0;
}