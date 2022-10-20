#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int cnt = 0;
	char a[100] = { 0 };
	scanf("%s", &a);
	for (int i = 0; i < 100; i++) {
		if (a[i] != 0) cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		if (a[i] <= 90) a[i] += 32;
		else a[i] -= 32;
		printf("%c", a[i]);
	}
	return 0;
}