#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int sang, jung, ha, col, sa;
	int hamberger, drink, price = 0;
	scanf("%d %d %d %d %d", &sang, &jung, &ha, &col, &sa);
	if (sang >= ha && jung >= ha) hamberger = ha;
	if (sang >= jung && jung <= ha) hamberger = jung;
	if (sang <= jung && sang <= ha) hamberger = sang;
	if (col >= sa) drink = sa;
	if (col <= sa) drink = col;
	price = hamberger + drink - 50;
	printf("%d\n", price);
	return 0;
}