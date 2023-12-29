#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, score[5] = { 0 }, student_number = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &score[i]);
	}
	if (score[0] > score[2]) student_number += ((score[0] - score[2]) * 508);
	else student_number += ((score[2] - score[0]) * 108);
	if (score[1] > score[3]) student_number += ((score[1] - score[3]) * 212);
	else student_number += ((score[3] - score[1]) * 305);
	if (score[4] != 0) student_number += (score[4] * 707);
	student_number *= 4763;
	printf("%d\n", student_number);
	return 0;
}