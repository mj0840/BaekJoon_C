#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, k, g, d[16];
	scanf("%d %d", &n, &k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &g);
		g = g * 100 / n;
		if (0 <= g && g <= 4) d[i] = 1;
		if (4 < g && g <= 11) d[i] = 2;
		if (11 < g && g <= 23) d[i] = 3;
		if (23 < g && g <= 40) d[i] = 4;
		if (40 < g && g <= 60) d[i] = 5;
		if (60 < g && g <= 77) d[i] = 6;
		if (77 < g && g <= 89) d[i] = 7;
		if (89 < g && g <= 96) d[i] = 8;
		if (96 < g && g <= 100) d[i] = 9;
	}
	for (int i = 0; i < k; i++) {
		printf("%d ", d[i]);
	}
	return 0;
}