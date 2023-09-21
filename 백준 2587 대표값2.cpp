#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num, sum = 0, number[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num);
		sum += num;
		number[i] = num;
	}
	for (int i = 0; i < 3; i++) {
		num = 0;
		for (int j = 1; j < 5; j++) {
			if (number[num] > number[j]) num = j;
		}
		if (i != 2) number[num] = 100;
	}
	printf("%d\n%d\n", sum / 5, number[num]);
	return 0;
}