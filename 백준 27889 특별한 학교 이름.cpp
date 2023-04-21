#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char s[5];
	scanf("%s", s);
	if (s[0] == 'N')
		printf("North London Collegiate School");
	if (s[0] == 'B')
		printf("Branksome Hall Asia");
	if (s[0] == 'K')
		printf("Korea International School");
	if (s[0] == 'S')
		printf("St. Johnsbury Academy");
	return 0;
}