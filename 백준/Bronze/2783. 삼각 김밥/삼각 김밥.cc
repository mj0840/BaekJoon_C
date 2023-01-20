#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	double x, y, n;
	double sum = 0, tmp = 0, min = 0;
	double x_[100], y_[100];
	scanf("%lf %lf %lf", &x, &y, &n);
	tmp = 1000 / y;
	min = x * tmp;
	for (int i = 0; i < n; i++) {
		scanf("%lf %lf", &x_[i], &y_[i]);
		tmp = 1000 / y_[i];
		sum = x_[i] * tmp;
		if (sum < min) min = sum;
	}
	printf("%.2lf", min);
	return 0;
}