#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	char s[21];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		for (int j = 0; j < 20; j++) {
			if (s[j] >= 65 && s[j] <= 90) s[j] += 32;
		}
		printf("%s\n", s);
	}
	return 0;
}