#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	long long int sum, number;
	char code;
	scanf("%lld", &sum);
	while (1) {
		scanf(" %c", &code);
		if (code == '=') {
			printf("%lld\n", sum);
			return 0;
		}
		scanf("%lld\n", &number);
		if (code == '+') sum += number;
		if (code == '-') sum -= number;
		if (code == '*') sum *= number;
		if (code == '/') sum /= number;
	}
}