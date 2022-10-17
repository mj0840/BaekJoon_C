#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int cnt = 0, num;
	int test[30] = { 0 };
	for (int i = 0; i < 28; i++) {
		scanf("%d", &num);
		test[num - 1] = num;
	}
	for (int i = 0; i < 30; i++) {
		if (test[i] == 0) printf("%d\n", i + 1);
	}
	return 0;
}