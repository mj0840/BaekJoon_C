#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n1, n2, sum;
	for (int i = 0; i < 100000000; i++) {
		scanf("%d %d", &n1, &n2);
		if (n1 == n2 && n2 == 0) return 0;
		sum = n2 - n1;
		printf("%d\n", n1 - sum);
	}
}