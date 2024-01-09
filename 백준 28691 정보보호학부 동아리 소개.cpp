#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char s;
	scanf("%c", &s);
	if (s == 'M') printf("MatKor\n");
	if (s == 'W') printf("WiCys\n");
	if (s == 'C') printf("CyKor\n");
	if (s == 'A') printf("AlKor\n");
	if (s == '$') printf("$clear\n");
	return 0;
}