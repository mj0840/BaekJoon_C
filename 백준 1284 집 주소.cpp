#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, cnt, tmp;
	for (int i = 0; i < 10000; i++) {
		cnt = 1;
		scanf("%d", &n);
		if (n == 0) return 0;
		while (n != 0) {
			tmp = n % 10;
			if (tmp == 0) cnt += 5;
			else if (tmp == 1) cnt += 3;
			else cnt += 4;
			n /= 10;
		}
		printf("%d\n", cnt);
	}
}