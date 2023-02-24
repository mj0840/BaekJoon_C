#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, num, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num == 1) cnt++;
	}
	if (cnt > n - cnt) printf("Junhee is cute!");
	else printf("Junhee is not cute!");
	return 0;
}