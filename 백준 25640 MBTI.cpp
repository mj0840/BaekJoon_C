#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char j[5], m[5];
	int n, cnt = 0;
	scanf("%s %d", j, &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", m);
		if (j[0] == m[0] && j[1] == m[1] && j[2] == m[2] && j[3] == m[3]) cnt++;
	}
	printf("%d", cnt);
	return 0;
}