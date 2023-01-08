#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int station = 0, total = 0;
	int get_out, get_on;
	for (int i = 0; i < 4; i++) {
		scanf("%d %d", &get_out, &get_on);
		station = station - get_out + get_on;
		if (station > total) total = station;
	}
	printf("%d", total);
	return 0;
}