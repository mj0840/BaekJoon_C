#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, result = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &t);
		result += t;
	}
	result %= 4;
	if (result == 0) printf("N\n");
	if (result == 1) printf("E\n");
	if (result == 2) printf("S\n");
	if (result == 3) printf("W\n");
	return 0;
}