#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, sum = 0, cnt = -1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		sum += m;
		cnt++;
	}
	printf("%d", sum - cnt);
	return 0;
}