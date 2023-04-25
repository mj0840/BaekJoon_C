#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void heart() {
	printf(" @@@   @@@ \n");
	printf("@   @ @   @\n");
	printf("@    @    @\n");
	printf("@         @\n");
	printf(" @       @ \n");
	printf("  @     @  \n");
	printf("   @   @   \n");
	printf("    @ @    \n");
	printf("     @     \n");
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		heart();
	}
	return 0;
}