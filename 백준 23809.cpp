#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("@");
		}
		for (int j = 0; j < 3 * n; j++) {
			printf(" ");
		}
		for (int j = 0; j < n; j++) {
			printf("@");
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("@");
		}
		for (int j = 0; j < 2 * n; j++) {
			printf(" ");
		}
		for (int j = 0; j < n; j++) {
			printf("@");
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3 * n; j++) {
			printf("@");
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("@");
		}
		for (int j = 0; j < 2 * n; j++) {
			printf(" ");
		}
		for (int j = 0; j < n; j++) {
			printf("@");
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("@");
		}
		for (int j = 0; j < 3 * n; j++) {
			printf(" ");
		}
		for (int j = 0; j < n; j++) {
			printf("@");
		}
		printf("\n");
	}
	return 0;
}