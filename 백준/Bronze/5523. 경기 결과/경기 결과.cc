#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, a, b;
	int point_a = 0, point_b = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (a > b) point_a++;
		if (a < b) point_b++;
	}
	printf("%d %d", point_a, point_b);
	return 0;
}