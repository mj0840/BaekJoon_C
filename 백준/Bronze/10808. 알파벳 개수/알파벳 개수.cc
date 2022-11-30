#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char s[100] = { 0 };
	int cnt[26] = { 0 };
	scanf("%s", s);
	for (int i = 0; i < 100; i++) {
		if (s[i] == 0) break;
		else {
			for (int j = 0; j < 26; j++) {
				if (s[i] == (char)(j + 97)) {
					cnt[j]++;
				}
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", cnt[i]);
	}
	return 0;
}