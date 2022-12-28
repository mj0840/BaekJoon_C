#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char ch;
	scanf("%c", &ch);
	if (ch == 'N' || ch == 'n') printf("Naver D2");
	else printf("Naver Whale");
	return 0;
}