#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, count = 0;
	scanf("%d", &n);
	while (n > 0) {
		if (n % 5 == 0) {
			count += n / 5;
			break;
		}
		else {
			n -= 3;
			count++;
		}
	}
	if (n < 0) printf("-1\n");
	else printf("%d\n", count);
	return 0;
}