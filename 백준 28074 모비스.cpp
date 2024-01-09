#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int count[5] = { 0 }, cnt = 0;
	char s[100];
	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (s[i] == 'M') count[0]++;
		if (s[i] == 'O') count[1]++;
		if (s[i] == 'B') count[2]++;
		if (s[i] == 'I') count[3]++;
		if (s[i] == 'S') count[4]++;
	}
	for (int i = 0; i < 5; i++) {
		if (count[i] == 0) cnt++;
	}
	if (cnt == 0) printf("YES\n");
	else printf("NO\n");
	return 0;
}