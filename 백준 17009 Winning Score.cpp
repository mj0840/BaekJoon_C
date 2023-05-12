#define _crt_secure_no_warnings
#include<stdio.h>
int main() {
	int n1, n2, n3, a, b;
	scanf("%d %d %d", &n1, &n2, &n3);
	a = n1 * 3 + n2 * 2 + n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	b = n1 * 3 + n2 * 2 + n3;
	if (a > b) printf("A\n");
	if (a < b) printf("B\n");
	if (a == b) printf("T\n");
	return 0;
}