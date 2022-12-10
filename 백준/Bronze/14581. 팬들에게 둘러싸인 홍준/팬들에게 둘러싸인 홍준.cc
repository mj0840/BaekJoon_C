#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int s[10];
	scanf("%s", s);
	for (int i = 0; i < 3; i++) {
		printf(":fan:");
	}
	printf("\n");
	printf(":fan:");
	printf(":%s:", s);
	printf(":fan:\n");
	for (int i = 0; i < 3; i++) {
		printf(":fan:");
	}
	printf("\n");
	return 0;
}