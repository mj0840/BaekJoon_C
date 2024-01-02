#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, length, tmp, cost = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &length, &tmp);
		if (length == 136) cost += 1000;
		if (length == 142) cost += 5000;
		if (length == 148) cost += 10000;
		if (length == 154) cost += 50000;
	}
	printf("%d\n", cost);
	return 0;
}