#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, num1, num2, position = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &num1, &num2);
		if (num1 == position) position = num2;
		else if (num2 == position) position = num1;
	}
	printf("%d", position);
	return 0;
}