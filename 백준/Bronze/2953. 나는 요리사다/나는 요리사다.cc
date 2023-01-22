#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int person[5] = { 0 }, sum, max = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &sum);
			person[i] += sum;
		}
		if (person[max] < person[i]) max = i;
	}
	printf("%d %d", max + 1, person[max]);
	return 0;
}