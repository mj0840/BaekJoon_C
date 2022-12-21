#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num, sum = 0;
	for (int i = 0; i < 2000; i++) {
		scanf("%d", &num);
		switch (num) {
		case -1:
			printf("%d", sum);
			return 0;
		default:
			sum += num;
		}
	}
}