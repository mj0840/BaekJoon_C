#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, capacity_remaining = 0;
	int box[50], book[50];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &box[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &book[i]);
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (book[i] <= box[j]) {
				box[j] -= book[i];
				break;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		capacity_remaining += box[i];
	}
	printf("%d\n", capacity_remaining);
	return 0;
}