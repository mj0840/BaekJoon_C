#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int p, n;
	float d, a, b, f, sum;
	scanf("%d", &p);
	for (int i = 0; i < p; i++) {
		scanf("%d %f %f %f %f", &n, &d, &a, &b, &f);
		sum = d / (a + b) * f;
		printf("%d %f\n", n, sum);
	}
	return 0;
}