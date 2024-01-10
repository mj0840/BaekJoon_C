#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, n, point, c;
	double g, score;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		point = 0;
		score = 0;
		for (int j = 0; j < n; j++) {
			scanf("%d %lf", &c, &g);
			point += c;
			score += c * g;
		}
		printf("%d %.1lf\n", point, score / point);
	}
	return 0;
}