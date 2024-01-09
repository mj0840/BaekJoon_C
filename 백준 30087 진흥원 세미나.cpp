#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char s[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		if (s[0] == 'A' && s[1] == 'l') printf("204\n");
		if (s[0] == 'A' && s[1] == 'r') printf("302\n");
		if (s[0] == 'D') printf("207\n");
		if (s[0] == 'C') printf("B101\n");
		if (s[0] == 'N') printf("303\n");
		if (s[0] == 'S') printf("501\n");
		if (s[0] == 'T') printf("105\n");
	}
	return 0;
}