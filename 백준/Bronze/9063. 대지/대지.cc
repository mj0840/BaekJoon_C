#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, x, y, sum;
	int max_x = -10000, max_y = -10000, min_x = 10000, min_y = 10000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		if (max_x < x) max_x = x;
		if (max_y < y) max_y = y;
		if (min_x > x) min_x = x;
		if (min_y > y) min_y = y;
	}
	sum = (max_x - min_x) * (max_y - min_y);
	printf("%d", sum);
	return 0;
}