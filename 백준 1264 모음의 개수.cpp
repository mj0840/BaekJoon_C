#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int cnt;
	char s[256];
	for (int i = 0; i < 10000; i++) {
		for (int j = 0; j < 255; j++) {
			s[j] = 0;
		}
		cnt = 0;
		for (int j = 0; j < 255; j++) {
			scanf(" %c", &s[j]);
			if (s[j] == '#') return 0;
			if (s[j] == '.' || s[j] == '!' || s[j] == '?') break;
		}
		for (int j = 0; j < (int)strlen(s); j++) {
			if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') cnt++;
			if (s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U') cnt++;;
		}
		printf("%d\n", cnt);
	}
}