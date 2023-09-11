#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char A[10001], B[10001];
	long long int a = 0, b = 0;
	scanf("%s %s", A, B);
	for (int i = 0; i < strlen(A); i++) {
		a += (long long int)A[i] - 48;
	}
	for (int i = 0; i < strlen(B); i++) {
		b += (long long int)B[i] - 48;
	}
	printf("%lld\n", a * b);
	return 0;
}