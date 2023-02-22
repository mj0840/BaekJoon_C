#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, school, apple, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &school, &apple);
		sum += apple % school;
	}
	printf("%d", sum);
	return 0;
}