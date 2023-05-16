#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int alphabet[26] = { 0 }, max = 0;
	char s[1000001];
	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (s[i] >= 65 && s[i] <= 90) alphabet[(int)s[i] - 65]++;
		if (s[i] >= 97 && s[i] <= 122) alphabet[(int)s[i] - 97]++;
	}
	for (int i = 1; i < 26; i++) {
		if (alphabet[max] < alphabet[i]) max = i;
	}
	for (int i = 0; i < 26; i++) {
		if (max != i && alphabet[max] == alphabet[i]) {
			printf("?\n");
			return 0;
		}
	}
	printf("%c\n", max + 65);
	return 0;
}