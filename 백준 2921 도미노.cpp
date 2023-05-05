#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < i + 1; j++) {
			cnt += i + j;
		}
	}
	printf("%d", cnt);
	return 0;
}