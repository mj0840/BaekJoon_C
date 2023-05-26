#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n[10], sum[42] = { 0 }, cnt = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n[i]);
		sum[n[i] % 42]++;
	}
	for (int i = 0; i < 42; i++) {
		if (sum[i] != 0) cnt++;
	}
	printf("%d", cnt);
	return 0;
}