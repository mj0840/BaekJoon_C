#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char s[101];
	scanf("%s", s);
	int i = 0, j = strlen(s) - 1;
	while (1) {
		if (i == strlen(s) / 2) break;
		if (s[i] != s[j]) {
			printf("0\n");
			return 0;
		}
		i++;
		j--;
	}
	printf("1\n");
	return 0;
}