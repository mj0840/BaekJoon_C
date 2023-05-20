#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int t, point, len;
	char alphabet[26], s[1001];
	char c;
	scanf("%d\n", &t);
	for (int i = 0; i < t; i++) {
		scanf("%s", s);
		point = 2015;
		for (int j = 0; j < 26; j++) {
			alphabet[j] = 0;
		}
		len = strlen(s);
		for (int j = 0; j < len; j++) {
			for (int k = 0; k < 26; k++) {
				if (s[j] == k + 65) alphabet[k] = 1;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (alphabet[j] == 1) point -= j + 65;
		}
		printf("%d\n", point);
	}
	return 0;
}