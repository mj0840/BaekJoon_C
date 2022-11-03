#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int n, cnt[1000] = { 0 };
	char s[20];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)	{
		scanf("%s", &s);
		cnt[i] = strlen(s);
	}
	for (int i = 0; i < n; i++) {
		printf("%s\n", cnt[i] < 10 && cnt[i]>5 ? "yes" : "no");
	}
	return 0;
}