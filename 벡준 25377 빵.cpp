#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, a, b, sum = 1001, tmp = 1001;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (a <= b) sum = b;
		if (tmp > sum) tmp = sum;
	}
	if (tmp == 1001) printf("-1");
	else printf("%d", tmp);
	return 0;
}