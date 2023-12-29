#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, k, x, max, min, count = 0;
	scanf("%d %d %d %d", &a, &b, &k, &x);
	max = k + x;
	min = k - x;
	for (int i = a; i <= b; i++) {
		if (min <= i && i <= max) count++;
	}
	if (count == 0) printf("IMPOSSIBLE\n");
	else printf("%d\n", count);
	return 0;
}