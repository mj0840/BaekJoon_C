#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int check[10000], tmp;
	for (int i = 0; i < 10000; i++) {
		check[i] = i + 1;
	}
	for (int i = 1; i <= 10000; i++) {
		tmp = i + i / 1000 % 10 + i / 100 % 10 + i / 10 % 10 + i % 10;
		for (int j = 0; j < 10000; j++) {
			if (tmp == check[j]) {
				check[j] = 0;
				break;
			}
		}
	}
	for (int i = 0; i < 10000; i++) {
		if (check[i] != 0) printf("%d\n", check[i]);
	}
	return 0;
}