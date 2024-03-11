#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int lu;
	char s[8];
	scanf("%d %s", &lu, s);
	if (s[0] == 'm') printf("0\n");
	if (s[0] == 'b') printf("%d\n", lu * 200);
	if (s[0] == 'c') printf("%d\n", lu * 400);
	if (s[0] == 'g') printf("%d\n", lu * 600);
	if (s[0] == 'p') printf("%d\n", lu * 1000);
	return 0;
}