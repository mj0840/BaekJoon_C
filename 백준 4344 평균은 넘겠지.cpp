#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int c, n, score[1000], count;
	double average;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		scanf("%d", &n);
		average = 0;
		for (int j = 0; j < n; j++) {
			scanf("%d", &score[j]);
			average += score[j];
		}
		average /= n;
		count = 0;
		for (int j = 0; j < n; j++) {
			if (average < score[j]) count++;
		}
		printf("%.3lf%%\n", 100.0 / n * count);
	}
	return 0;
}