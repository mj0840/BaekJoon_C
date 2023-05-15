#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, grow, cut, count;
	while (1) {
		scanf("%d", &a);
		if (a == 0) return 0;
		count = 1;
		for (int i = 0; i < a; i++) {
			scanf("%d %d", &grow, &cut);
			count = count * grow - cut;
		}
		printf("%d\n", count);
	}
}