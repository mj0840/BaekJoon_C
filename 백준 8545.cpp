#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char s[4];
	scanf("%s", s);
	for (int i = 2; i >= 0; i--) {
		printf("%c", s[i]);
	}
	return 0;
}