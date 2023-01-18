#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n[7];
	int sum = 0, min = 100;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &n[i]);
		if (n[i] % 2 == 1) {
			sum += n[i];
			if (n[i] < min) min = n[i];
		}
	}
	if (sum == 0) printf("-1");
	else printf("%d\n%d\n", sum, min);
	return 0;
}