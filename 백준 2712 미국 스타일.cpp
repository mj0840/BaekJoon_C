#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t;
	char s[3];
	double n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%lf %s", &n, s);
		if (s[0] == 'k') printf("%.4lf lb\n", n * 2.2046);
		else if (s[1] == 'b') printf("%.4lf kg\n", n * 0.4536);
		else if (s[0] == 'l') printf("%.4lf g\n", n * 0.2642);
		else printf("%.4lf l\n", n * 3.7854);
	}
	return 0;
}