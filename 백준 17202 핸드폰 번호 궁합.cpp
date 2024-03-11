#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char a[10], b[10];
	int number[16], cnt = 0;
	scanf("%s %s", &a, &b);
	for (int i = 0; i < 16; i++) {
		if (i % 2 == 0) number[i] = (int)a[cnt] - 48;
		else {
			number[i] = (int)b[cnt] - 48;
			cnt++;
		}
	}
	for (int i = 1; i <= 14; i++) {
		for (int j = 0; j < 16 - i; j++) {
			number[j] += number[j + 1];
			number[j] %= 10;
		}
	}
	printf("%d%d\n", number[0], number[1]);
	return 0;
}