#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int color;
	scanf("%d", &color);
	if (620 <= color && color <= 780) printf("Red\n");
	if (590 <= color && color < 620) printf("Orange\n");
	if (570 <= color && color < 590) printf("Yellow\n");
	if (495 <= color && color < 570) printf("Green\n");
	if (450 <= color && color < 495) printf("Blue\n");
	if (425 <= color && color < 450) printf("Indigo\n");
	if (380 <= color && color < 425) printf("Violet\n");
	return 0;
}