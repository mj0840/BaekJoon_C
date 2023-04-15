#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int n, cnt;
	char s[21];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &cnt, s);
		for (int j = 0; j < strlen(s); j++) {
			for (int k = 0; k < cnt; k++) {
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
	return 0;
}