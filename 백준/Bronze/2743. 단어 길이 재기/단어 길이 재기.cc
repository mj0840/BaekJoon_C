#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int cnt = 0;
	char a[100] = { 0 };
	scanf("%s", &a);
	for (int i = 0; i < 100; i++) {
		if (a[i] != 0) cnt++;
	}
	printf("%d", cnt);
	return 0;
}