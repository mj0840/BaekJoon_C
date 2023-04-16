#define _crt_secure_no_warnings
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	printf("int a;\n");
	for (int i = 0; i < n; i++) {
		printf("int ");
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		if (i == 0) printf("ptr ");
		else printf("ptr%d ", i + 1);
		printf("= &");
		if (i == 0) printf("a;\n");
		else if (i == 1) printf("ptr;\n");
		else printf("ptr%d;\n", i);
	}
	return 0;
}