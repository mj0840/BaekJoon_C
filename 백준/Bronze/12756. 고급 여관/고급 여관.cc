#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, a_heart, b_heart;
	scanf("%d %d", &a, &a_heart);
	scanf("%d %d", &b, &b_heart);
	for (int i = 0; i < 100000; i++) {
		if (a_heart <= 0 || b_heart <= 0) break;
		a_heart -= b;
		b_heart -= a;
	}
	if (a_heart <= 0 && b_heart > 0) printf("PLAYER B\n");
	else if (a_heart > 0 && b_heart <= 0) printf("PLAYER A\n");
	else printf("DRAW\n");
	return 0;
}