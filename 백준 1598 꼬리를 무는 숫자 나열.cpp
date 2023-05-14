#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n1, n2, share1, share2, remain1, remain2, sum;
	scanf("%d %d", &n1, &n2);
	share1 = n1 / 4;
	remain1 = n1 % 4;
	if (remain1 > 0) share1++;
	if (remain1 == 0) remain1 = 4;
	share2 = n2 / 4;
	remain2 = n2 % 4;
	if (remain2 > 0) share2++;
	if (remain2 == 0) remain2 = 4;
	if (n1 > n2) {
		sum = share1 - share2;
		sum += remain1 > remain2 ? remain1 - remain2 : remain2 - remain1;
	}
	else {
		sum = share2 - share1;
		sum += remain1 > remain2 ? remain1 - remain2 : remain2 - remain1;
	}
	printf("%d", sum);
	return 0;
}