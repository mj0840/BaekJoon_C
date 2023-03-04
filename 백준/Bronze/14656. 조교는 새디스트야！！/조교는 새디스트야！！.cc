#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, num[20000], cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		if (num[i] != i + 1) cnt++;
	}
	printf("%d", cnt);
	return 0;
}