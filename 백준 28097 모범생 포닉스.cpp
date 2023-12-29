#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, t[120], time;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &t[i]);
	}
	time = t[0];
	for (int i = 1; i < n; i++) {
		time += (8 + t[i]);
	}
	printf("%d %d\n", time / 24, time % 24);
	return 0;
}