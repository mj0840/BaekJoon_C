#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int h, m, s, lh, lm, ls, sum, lsum;
	scanf("%d:%d:%d", &h, &m, &s);
	sum = h * 3600 + m * 60 + s;
	scanf("%d:%d:%d", &h, &m, &s);
	lsum = h * 3600 + m * 60 + s;
	if (sum != lsum) {
		if (lsum < sum) {
			lsum += 86400;
		}
		lsum -= sum;
		lh = lsum / 3600; lsum %= 3600;
		lm = lsum / 60; lsum %= 60;
		ls = lsum;
		printf("%02d:%02d:%02d", lh, lm, ls);
	}
	else {
		printf("24:00:00");
	}
	return 0;
}