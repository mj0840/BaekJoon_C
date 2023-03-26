#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, s;
	scanf("%d %d", &t, &s);
	if (t >= 12 && t <= 16 && s == 0) printf("320");
	else printf("280");
	return 0;
}