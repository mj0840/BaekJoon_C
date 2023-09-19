#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char s[9];
	int result, count, tmp, length;
	while (1) {
		scanf("%s", s);
		if (s[0] == '#') return 0;
		result = 0;
		length = strlen(s);
		count = length - 1;
		for (int i = 0; i < length; i++) {
			if (s[i] == '-') tmp = 0;
			if (s[i] == '\\') tmp = 1;
			if (s[i] == '(') tmp = 2;
			if (s[i] == '@') tmp = 3;
			if (s[i] == '?') tmp = 4;
			if (s[i] == '>') tmp = 5;
			if (s[i] == '&') tmp = 6;
			if (s[i] == '%') tmp = 7;
			if (s[i] == '/') tmp = -1;
			for (int i = count; i > 0; i--) {
				tmp *= 8;
			}
			count--;
			result += tmp;
		}
		printf("%d\n", result);
	}
}