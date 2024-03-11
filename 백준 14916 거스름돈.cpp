#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, sum = 0;
	scanf("%d", &n);
	while (n > 0) {
		if (n % 5 == 0) {
			sum += n / 5;
			break;
		}
		else {
			n -= 2;
			sum++;
		}
	}
	if (n < 0) printf("-1\n");
	else printf("%d\n", sum);
	return 0;
}