#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int n, tmp;
	char k[61];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", k);
		tmp = (int)k[strlen(k) - 1] - 48;
		if (tmp % 2) printf("odd\n");
		else printf("even\n");
	}
	return 0;
}