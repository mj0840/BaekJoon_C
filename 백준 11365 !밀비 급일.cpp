#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char s[501];
	int len;
	while (1) {
		scanf(" %[^\n]", s);
		if (s[0] == 'E' && s[1] == 'N' && s[2] == 'D') break;
		len = strlen(s);
		for (int i = len - 1; i >= 0; i--) {
			printf("%c", s[i]);
		}
		printf("\n");
	}
	return 0;
}