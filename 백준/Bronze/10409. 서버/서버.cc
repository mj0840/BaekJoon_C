#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, t, cnt = 0;
	int arr[50];
	scanf("%d %d", &n, &t);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		t -= arr[i];
		cnt++;
		if (t < 0) {
			printf("%d", cnt - 1);
			return 0;
		}
	}
	printf("%d", cnt);
	return 0;
}