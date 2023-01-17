#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int data[9][9];
	int x = 0, y = 0;
	int max = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &data[i][j]);
		}
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < data[i][j]) {
				x = i;
				y = j;
				max = data[i][j];
			}
		}
	}
	printf("%d\n%d %d", max, x + 1, y + 1);
	return 0;
}