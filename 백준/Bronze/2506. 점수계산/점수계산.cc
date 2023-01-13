#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, score = 0, cnt = 0;
	int answer[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &answer[i]);
	}
	for (int i = 0; i < n; i++) {
		if (answer[i] == 1) {
			++cnt;
			score += cnt;
		}
		else if (answer[i] == 0) {
			cnt = 0;
		}
	}
	printf("%d", score);
	return 0;
}