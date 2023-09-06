#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num1, num2, max, min, i;
	scanf("%d %d", &num1, &num2);
	if (num1 < num2) {
		int tmp = num2;
		num2 = num1;
		num1 = tmp;
	}
	for (i = 1; i <= num2; i++) {
		if (num1 % i == 0 && num2 % i == 0) max = i;
	}
	i = 1;
	while (1) {
		min = max * i;
		if (min % num1 == 0 && min % num2 == 0) break;
		i++;
	}
	printf("%d\n%d\n", max, min);
	return 0;
}