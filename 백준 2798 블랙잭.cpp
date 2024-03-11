#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, max = 0, card[100], tmp;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (i != j && j != k && i != k) {
					tmp = card[i] + card[j] + card[k];
					if (m >= tmp && max < tmp) max = tmp;
				}
			}
		}
	}
	printf("%d\n", max);
	return 0;
}