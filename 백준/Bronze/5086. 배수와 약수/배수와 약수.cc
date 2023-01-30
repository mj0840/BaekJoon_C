#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n1, n2;
	for (int i = 0; i < 100000000; i++) {
		scanf("%d %d", &n1, &n2);
		if (n1 == n2 && n2 == 0) return 0;
		if (n1 % n2 == 0) printf("multiple\n");
		if (n2 % n1 == 0) printf("factor\n");
		if (n1 % n2 != 0 && n2 % n1 != 0) printf("neither\n");
	}
}