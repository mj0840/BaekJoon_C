#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}