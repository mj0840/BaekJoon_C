#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sum = 0;
void plus(int num) {
	sum += num;
}
int main() {
	int num;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num);
		if (num < 40) plus(40);
		else plus(num);
	}
	sum /= 5;
	printf("%d\n", sum);
	return 0;
}