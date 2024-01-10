#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, sum;
	char s[5];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%s", s);
		printf("%d\n", ((int)s[0] - 48) + ((int)s[2] - 48));
	}
	return 0;
}