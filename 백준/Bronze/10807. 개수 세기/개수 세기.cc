#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, v, a[100], cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &v);
	for (int i = 0; i < n; i++) {
		if (a[i] == v) cnt++;
	}
	printf("%d", cnt);
	return 0;
}