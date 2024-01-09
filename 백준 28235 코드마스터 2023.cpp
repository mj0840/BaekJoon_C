#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char s[10];
	scanf("%s", s);
	if (s[0] == 'S') printf("HIGHSCHOOL\n");
	if (s[0] == 'C') printf("MASTER\n");
	if (s[0] == '2') printf("0611\n");
	if (s[0] == 'A') printf("CONTEST\n");
	return 0;
}