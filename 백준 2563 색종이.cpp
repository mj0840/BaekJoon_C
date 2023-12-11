#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int white[100][100] = { 0 };
	int n, a, b, count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		for (int j = a; j < a + 10; j++) {
			for (int k = b; k < b + 10; k++) {
				white[j][k] = 1;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (white[i][j] == 1) count++;
		}
	}
	printf("%d\n", count);
	return 0;
}