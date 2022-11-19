#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int person[4];
int total_point() {
	int sum = 0;
	for (int i = 0; i < 4; i++) sum += person[i];
	return sum;
}
int main() {
	int min_sum, man_sum;
	for (int i = 0; i < 4; i++) scanf("%d", &person[i]);
	min_sum = total_point();
	for (int i = 0; i < 4; i++) scanf("%d", &person[i]);
	man_sum = total_point();
	if (min_sum > man_sum) printf("%d", min_sum);
	else printf("%d", man_sum);
	return 0;
}