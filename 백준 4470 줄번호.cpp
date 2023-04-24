#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int n;
	char s[51];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		getchar();
		scanf("%[^\n]s", s);
		printf("%d. %s\n", i + 1, s);
	}
	return 0;
}