#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a1, a2, a3, sum;
	for (int i = 0; i < 100000000; i++) {
		scanf("%d %d %d", &a1, &a2, &a3);
		if (a1 == a2 && a2 == a3 && a3 == 0) return 0;
		else if (a2 - a1 == a3 - a2) {
			sum = a2 - a1;
			printf("AP %d\n", a3 + sum);
		}
		else {
			sum = a2 / a1;
			printf("GP %d\n", a3 * sum);
		}
	}
}