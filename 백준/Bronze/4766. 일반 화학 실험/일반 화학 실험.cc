#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float num, sum;
	scanf("%f", &num);
	sum = num;
	for (int i = 0; i < 100000000; i++) {
		scanf("%f", &num);
		if (num == 999) return 0;
		printf("%.2f\n", num - sum);
		sum = num;
	}
}