#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char s[100] = { 0 };
	scanf("%s", s);
	for (int i = 97; i <= 122; i++) {
		int j = 0;
		for (; s[j] != 0; j++) {
			if (s[j] == (char)i) break;
		}
		if (s[j] == (char)i) printf("%d ", j);
		else printf("-1 ");
	}
	return 0;
}