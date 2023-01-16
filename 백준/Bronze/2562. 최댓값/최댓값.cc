#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int data[9];
	int max = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &data[i]);
	}
	for (int i = 1; i < 9; i++) {
		if (data[max] < data[i]) max = i;
	}
	printf("%d\n%d\n", data[max], max + 1);
	return 0;
}