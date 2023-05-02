#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, k, team = 0, tmp;
	scanf("%d %d %d", &n, &m, &k);
	while (n >= 2 && m >= 1) {
		team++;
		n -= 2;
		m--;
	}
	tmp = n + m;
	while (k > tmp) {
		team--;
		tmp += 3;
	}
	printf("%d", team);
	return 0;
}