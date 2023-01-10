#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n[3][4];
	int count[3], cnt;
	for (int i = 0; i < 3; i++) {
		cnt = 0;
		for (int j = 0; j < 4; j++) {
			scanf("%d", &n[i][j]);
			cnt += n[i][j];
		}
		count[i] = cnt;
	}
	for (int i = 0; i < 3; i++) {
		switch (count[i]) {
		case 0:
			printf("D\n");
			break;
		case 1:
			printf("C\n");
			break;
		case 2:
			printf("B\n");
			break;
		case 3:
			printf("A\n");
			break;
		case 4:
			printf("E\n");
			break;
		}
	}
	return 0;
}