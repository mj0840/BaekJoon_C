#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, input[1000], sort[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
	}
	for (int i = 0; i < n; i++) {
		int min = 0;
		for (int j = 1; j < n; j++) {
			if (input[min] > input[j]) min = j;
		}
		sort[i] = input[min];
		input[min] = 1000;
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", sort[i]);
	}
	return 0;
}