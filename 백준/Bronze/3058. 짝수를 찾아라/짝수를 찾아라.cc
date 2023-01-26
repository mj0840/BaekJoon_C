#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n[7], t, sum = 0, min = 100;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 7; j++) {
			scanf("%d", &n[j]);
			if (n[j] % 2 == 0) {
				sum += n[j];
				if (n[j] < min) min = n[j];
			}
		}
		printf("%d %d\n", sum, min);
		sum = 0;
		min = 100;
	}
	return 0;
}