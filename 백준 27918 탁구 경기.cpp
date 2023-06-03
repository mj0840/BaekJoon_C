#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, cnt_d = 0, cnt_p = 0;
	char ch;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %c", &ch);
		if ((cnt_d - cnt_p) >= 2 || (cnt_p - cnt_d) >= 2) break;
		if (ch == 'D') cnt_d++;
		if (ch == 'P') cnt_p++;
	}
	printf("%d:%d\n", cnt_d, cnt_p);
	return 0;
}