#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, a, b, c, max;
	int person[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == b && b == c) person[i] = 10000 + a * 1000;
		else if (a == b || a == c) person[i] = 1000 + a * 100;
		else if (b == c) person[i] = 1000 + b * 100;
		else if (a > b && a > c) person[i] = a * 100;
		else if (b > a && b > c) person[i] = b * 100;
		else person[i] = c * 100;
	}
	max = person[0];
	for (int i = 1; i < n; i++) {
		if (person[i] > max) max = person[i];
	}
	printf("%d", max);
	return 0;
}