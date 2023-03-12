#define	_CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n + 2; i++) {
		for (int j = 0; j < n + 2; j++) {
			if (i == 0 || j == 0 || i == n + 1 || j == n + 1) printf("@");
			else printf(" ");
		}
		printf("\n");
	}
}