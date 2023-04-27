#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, p, five = 50000, ten = 50000, fifteen = 50000, twenty = 50000;
	scanf("%d %d", &n, &p);
	if (n >= 5) five = p - 500 >= 0 ? p - 500 : 0;
	if (n >= 10) ten = p / 10 * 9 >= 0 ? p / 10 * 9 : 0;
	if (n >= 15) fifteen = p - 2000 >= 0 ? p - 2000 : 0;
	if (n >= 20) twenty = p / 20 * 15 >= 0 ? p / 20 * 15 : 0;
	if (n < 5) printf("%d", p);
	else if (five <= ten && five <= fifteen && five <= twenty && n >= 5) printf("%d", five);
	else if (ten <= five && ten <= fifteen && ten <= twenty && n >= 10) printf("%d", ten);
	else if (fifteen <= five && fifteen <= ten && fifteen <= twenty && n >= 15) printf("%d", fifteen);
	else if (twenty <= five && twenty <= ten && twenty < fifteen && n >= 20) printf("%d", twenty);
	return 0;
}