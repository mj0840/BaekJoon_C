#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int b_x, b_y, d_x, d_y, j_x, j_y, bessie_count = 0, daisy_count = 0, tmp_x, tmp_y;
	scanf("%d %d %d %d %d %d", &b_x, &b_y, &d_x, &d_y, &j_x, &j_y);
	if (b_x < j_x) tmp_x = j_x - b_x;
	else tmp_x = b_x - j_x;
	if (b_y < j_y) tmp_y = j_y - b_y;
	else tmp_y = b_y - j_y;
	bessie_count = tmp_x > tmp_y ? tmp_x : tmp_y;
	if (d_x < j_x) tmp_x = j_x - d_x;
	else tmp_x = d_x - j_x;
	if (d_y < j_y) tmp_y = j_y - d_y;
	else tmp_y = d_y - j_y;
	daisy_count = tmp_x + tmp_y;
	if (bessie_count < daisy_count) printf("bessie\n");
	else if (bessie_count > daisy_count) printf("daisy\n");
	else printf("tie\n");
	return 0;
}