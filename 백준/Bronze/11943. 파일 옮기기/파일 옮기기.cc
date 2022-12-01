#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int cnt = 0;
	int a_apple, a_orange;
	int b_apple, b_orange;
	scanf("%d %d", &a_apple, &a_orange);
	scanf("%d %d", &b_apple, &b_orange);
	if (a_apple - b_apple >= a_orange - b_orange) {
		for (int i = b_apple; b_apple != 0; i++) {
			cnt++;
			a_apple++;
			b_apple--;
		}
		for (int i = a_orange; a_orange != 0; i++) {
			cnt++;
			a_orange--;
			b_orange++;
		}
	}
	else {
		for (int i = a_apple; a_apple != 0; i++) {
			cnt++;
			a_apple--;
			b_apple++;
		}
		for (int i = b_orange; b_orange != 0; i++) {
			cnt++;
			a_orange++;
			b_orange--;
		}
	}
	printf("%d\n", cnt);
	return 0;
}