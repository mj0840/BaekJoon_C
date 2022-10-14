#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char s[2];
	scanf("%c%c", &s[0], &s[1]);
	switch (s[0]) {
	case 'A': {
		if (s[1] == '+') printf("4.3");
		else if (s[1] == '0') printf("4.0");
		else printf("3.7");
		break;
	};
	case 'B': {
		if (s[1] == '+') printf("3.3");
		else if (s[1] == '0') printf("3.0");
		else printf("2.7");
		break;
	};
	case 'C': {
		if (s[1] == '+') printf("2.3");
		else if (s[1] == '0') printf("2.0");
		else printf("1.7");
		break;
	};
	case 'D': {
		if (s[1] == '+') printf("1.3");
		else if (s[1] == '0') printf("1.0");
		else printf("0.7");
		break;
	};
	default:
		printf("0.0");
		break;
	}
	return 0;
}