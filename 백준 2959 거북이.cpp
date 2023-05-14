#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, d, secondMax, min;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a <= b && a <= c && a <= d) {
		min = a;
		if ((c <= b && b <= d) || (d <= b && b <= c)) secondMax = b;
		else if ((b <= c && c <= d) || (d <= c && c <= b)) secondMax = c;
		else secondMax = d;
	}
	else if (b <= a && b <= c && b <= d) {
		min = b;
		if ((c <= a && a <= d) || (d <= a && a <= c)) secondMax = a;
		else if ((a <= c && c <= d) || (d <= c && c <= a)) secondMax = c;
		else secondMax = d;
	}
	else if (c <= a && c <= b && c <= d) {
		min = c;
		if ((b <= a && a <= d) || (d <= a && a <= b)) secondMax = a;
		else if ((a <= b && b <= d) || (d <= b && b <= a)) secondMax = b;
		else secondMax = d;
	}
	else {
		min = d;
		if ((b <= a && a <= c) || (c <= a && a <= b)) secondMax = a;
		else if ((a <= b && b <= c) || (c <= b && b <= a)) secondMax = b;
		else secondMax = c;
	}
	printf("%d\n", secondMax * min);
	return 0;
}