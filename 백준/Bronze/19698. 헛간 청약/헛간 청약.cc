#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, w, h, l;
	int length, width, sum;
	scanf("%d %d %d %d", &n, &w, &h, &l);
	length = w / l;
	width = h / l;
	sum = length * width;
	printf("%d", sum > n ? n : sum);
	return 0;
}