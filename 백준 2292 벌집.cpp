#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, cnt = 1, room = 1;
	scanf("%d", &n);
	while (1) {
		if (n <= room) break;
		room += cnt++ * 6;
	}
	printf("%d\n", cnt);
	return 0;
}