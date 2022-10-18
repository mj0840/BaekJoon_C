#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
		sum += n[i];
	}
	printf("%d", sum);
	return 0;
}