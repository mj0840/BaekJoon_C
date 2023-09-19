#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int d, m, y, count;
	while (1) {
		scanf("%d %d %d", &d, &m, &y);
		if (d == 0 && m == 0 && y == 0) return 0;
		count = 0;
		if (m == 1) count += d;
		else if (m < 8) {
			for (int i = 1; i < m; i++) {
				if (i % 2 == 1) count += 31;
				else count += 30;
			}
			count += d;
		}
		else {
			for (int i = 1; i <= 7; i++) {
				if (i % 2 == 1) count += 31;
				else count += 30;
			}
			for (int i = 8; i < m; i++) {
				if (i % 2 == 1) count += 30;
				else count += 31;
			}
			count += d;
		}
		if (m > 2) {
			if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) count -= 1;
			else count -= 2;
		}
		printf("%d\n", count);
	}
}