#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int k;
	char s[1001] = { 0 };
	scanf("%d", &k);
	scanf("%s", s);
	for (int i = 0; s[i] != 0; i += k) {
		printf("%c", s[i]);
	}
	return 0;
}