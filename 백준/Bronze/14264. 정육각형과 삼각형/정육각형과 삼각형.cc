#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	double l, sum;
	scanf("%lf", &l);
	sum = l * l * sqrt(3) / 4;
	printf("%.10lf", sum);
	return 0;
}