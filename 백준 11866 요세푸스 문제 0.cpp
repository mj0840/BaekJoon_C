#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int input[1000] = { 0 }, del[1000];
	int n, k, cnt = 1;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		input[i] = i + 1;
	}
	for (int i = 0; i < n; i) {
		for (int j = 0; j < n; j++) {
			if (input[j] != 0) {
				if (cnt == k) {
					del[i++] = input[j];
					input[j] = 0;
					cnt = 1;
				}
				else cnt++;
			}
		}
	}
	printf("<");
	for (int i = 0; i < n; i++) {
		if (i == n - 1) {
			printf("%d>\n", del[i]);
			break;
		}
		printf("%d, ", del[i]);
	}
	return 0;
}