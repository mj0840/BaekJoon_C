#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char number[5];
	int result;
	scanf("%s", number);
	if (number[1] == '0') {
		if (number[3] == '0') result = (number[0] - 48) * 10 + (number[2] - 48) * 10;
		else result = (number[0] - 48) * 10 + (number[2] - 48);
	}
	else {
		if (number[2] == '0') result = (number[0] - 48) + (number[1] - 48) * 10;
		else result = (number[0] - 48) + (number[1] - 48);
	}
	printf("%d\n", result);
	return 0;
}