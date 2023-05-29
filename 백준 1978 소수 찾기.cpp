#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, num, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		for (int j = 2; j < num; j++) {
			if (num % j == 0) break;
			if (j == num - 1) cnt++;
		}
		if (num == 2) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}