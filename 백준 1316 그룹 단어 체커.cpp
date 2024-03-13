#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int n, count = 0, len;
	char s[100], alphabet[26];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		for (int j = 0; j < 26; j++) {
			alphabet[j] = 0;
		}
		len = strlen(s);
		for (int j = 0; j < len; j++) {
			if (!alphabet[s[j] - 97] || s[j] == s[j - 1]) alphabet[s[j] - 97]++;
			else break;
			if (j == len - 1) count++;
		}
	}
	printf("%d\n", count);
	return 0;
}