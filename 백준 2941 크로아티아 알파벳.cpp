#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char s[101];
	int count = 0;
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++) {
		count++;
		switch (s[i]) {
		case 'c':
			if (s[i + 1] == '=') i++;
			if (s[i + 1] == '-') i++;
			break;
		case 'd':
			if (s[i + 1] == 'z' && s[i + 2] == '=') i += 2;
			if (s[i + 1] == '-') i++;
			break;
		case 'l':
			if (s[i + 1] == 'j') i++;
			break;
		case 'n':
			if (s[i + 1] == 'j') i++;
			break;
		case 's':
			if (s[i + 1] == '=') i++;
			break;
		case 'z':
			if (s[i + 1] == '=') i++;
			break;
		}
	}
	printf("%d\n", count);
	return 0;
}