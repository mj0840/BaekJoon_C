#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, i = 1;
	double inch, second;
	while (1) {
		scanf("%lf %d %lf", &inch, &n, &second);
		if (n == 0) return 0;
		printf("Trip #%d: %.2lf %.2lf\n", i++, inch * n * 3.1415927 / 63360, inch * n * 3.1415927 / 63360 * (3600 / second));
	}
}