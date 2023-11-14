#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char chess[9];
	int count = 0, tmp;
	for (int i = 0; i < 8; i++) {
		scanf("%s", chess);
		tmp = i % 2;
		for (int j = 0; j < 8; j++) {
			if (chess[j] == 'F' && j % 2 == tmp) count++;
		}
	}
	printf("%d\n", count);
	return 0;
}