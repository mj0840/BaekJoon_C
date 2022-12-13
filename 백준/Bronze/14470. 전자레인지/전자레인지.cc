#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, d, e, time = 0, sum = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if (a > 0) time -= e;
	for (int i = a; i <= b; i++) {
		if (i < 0) time += c;
		if (i == 0) time += d;
		if (i > 0) time += e;
	}
	printf("%d", time);
	return 0;
}