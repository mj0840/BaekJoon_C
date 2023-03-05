#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, h, a, helmet = 0, armor = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &h);
		if (h > helmet) helmet = h;
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &a);
		if (a > armor) armor = a;
	}
	printf("%d", helmet + armor);
	return 0;
}