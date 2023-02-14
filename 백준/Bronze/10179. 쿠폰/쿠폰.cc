#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	double num;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &num);
		num /= 5;
		num *= 4;
		printf("$%.2lf\n", num);
	}
	return 0;
}