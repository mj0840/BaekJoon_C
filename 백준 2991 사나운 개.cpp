#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, d, p, m, n, dog, cnt;
	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &p, &m, &n);
	cnt = 0;
	dog = p % (a + b);
	if (dog <= a && dog != 0) cnt++;
	dog = p % (c + d);
	if (dog <= c && dog != 0) cnt++;
	printf("%d\n", cnt);
	cnt = 0;
	dog = m % (a + b);
	if (dog <= a && dog != 0) cnt++;
	dog = m % (c + d);
	if (dog <= c && dog != 0) cnt++;
	printf("%d\n", cnt);
	cnt = 0;
	dog = n % (a + b);
	if (dog <= a && dog != 0) cnt++;
	dog = n % (c + d);
	if (dog <= c && dog != 0) cnt++;
	printf("%d\n", cnt);
	return 0;
}