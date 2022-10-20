#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, bs;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b && a < c) {
		bs = a;
		if (b < c) printf("%d %d %d", bs, b, c);
		else printf("%d %d %d", bs, c, b);
	}
	else if (b < a && b < c) {
		bs = b;
		if (a < c) printf("%d %d %d", bs, a, c);
		else printf("%d %d %d", bs, c, a);
	}
	else {
		bs = c;
		if (b < a) printf("%d %d %d", bs, b, a);
		else printf("%d %d %d", bs, a, b);
	}
	return 0;
}