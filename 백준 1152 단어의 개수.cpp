#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int cnt = 1;
	char s[1000001];
	scanf("%[^\n]%*c", s);
	if (s[0] == ' ') cnt--;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') cnt++;
	}
	if (s[strlen(s) - 1] == ' ') cnt--;
	printf("%d\n", cnt);
	return 0;
}