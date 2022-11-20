#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int m, f;
	for (int i = 0; i < 10000; i++) {
		scanf("%d %d", &m, &f);
		if (m == 0 && f == 0) return 0;
		else printf("%d\n", m + f);
	}
}