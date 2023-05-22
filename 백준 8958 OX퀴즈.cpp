#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int n, cnt, score;
	char s[80];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		score = 0;
		scanf("%s", s);
		cnt = 1;
		for (int j = 0; j < strlen(s); j++) {
			if (s[j] == 'O') score += cnt++;
			else cnt = 1;
		}
		printf("%d\n", score);
	}
	return 0;
}