#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, time, sum_y = 0, sum_m = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &time);
		sum_y += (time / 30 + 1) * 10;
		sum_m += (time / 60 + 1) * 15;
	}
	if (sum_y == sum_m) printf("Y M %d\n", sum_y);
	if (sum_y < sum_m) printf("Y %d\n", sum_y);
	if (sum_y > sum_m) printf("M %d\n", sum_m);
	return 0;
}