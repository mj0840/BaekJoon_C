#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, a = 0, b = 0, c = 0;
	scanf("%d", &t);
	while (t >= 300) {
		t -= 300;
		a++;
	}
	while (t >= 60) {
		t -= 60;
		b++;
	}
	while (t >= 10) {
		t -= 10;
		c++;
	}
	if (t) printf("-1\n");
	else printf("%d %d %d\n", a, b, c);
	return 0;
}