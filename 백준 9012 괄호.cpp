#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int t, cnt;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		char s[50] = { 0 };
		cnt = 0;
		scanf("%s", s);
		for (int j = 0; j < strlen(s); j++) {
			if (s[j] == '(') cnt++;
			else cnt--;
			if (cnt < 0) break;
		}
		if (cnt == 0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}