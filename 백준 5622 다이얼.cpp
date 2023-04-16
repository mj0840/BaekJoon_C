#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int sum = 0;
	char s[16];
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] >= 65 && s[i] <= 67) sum += 3;
		else if (s[i] >= 68 && s[i] <= 70) sum += 4;
		else if (s[i] >= 71 && s[i] <= 73) sum += 5;
		else if (s[i] >= 74 && s[i] <= 76) sum += 6;
		else if (s[i] >= 77 && s[i] <= 79) sum += 7;
		else if (s[i] >= 80 && s[i] <= 83) sum += 8;
		else if (s[i] >= 84 && s[i] <= 86) sum += 9;
		else sum += 10;
	}
	printf("%d\n", sum);
	return 0;
}