#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int hour, minute, second, add_time, sumtime = 0;
	scanf("%d %d %d\n%d", &hour, &minute, &second, &add_time);
	second += add_time;
	if (second >= 60) {
		sumtime = second / 60;
		second %= 60;
		minute += sumtime;
	}
	if (minute >= 60) {
		sumtime = minute / 60;
		minute %= 60;
		hour += sumtime;
	}
	if (hour >= 24)
		hour %= 24;
	printf("%d %d %d", hour, minute, second);
	return 0;
}