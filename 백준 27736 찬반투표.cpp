#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, num, approved = 0, rejected = 0, invalid = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		switch (num) {
		case 1:
			approved++;
			break;
		case -1:
			rejected++;
			break;
		case 0:
			invalid++;
			break;
		}
	}
	if (invalid >= approved + rejected) printf("INVALID\n");
	else if (approved > rejected) printf("APPROVED\n");
	else printf("REJECTED\n");
	return 0;
}