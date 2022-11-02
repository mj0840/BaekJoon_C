#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int y;
	scanf("%d", &y);
	switch (y) {
	case 2018: case 2019: case 2020: case 2021: case 2022:
		printf("A");
		break;
	}
	return 0;
}