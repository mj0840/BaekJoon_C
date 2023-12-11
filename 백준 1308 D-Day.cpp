#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int leap_year(int year) {
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}
int dates(int date, int year, int month, int day) {
	for (int i = 1; i < year; i++) {
		if (leap_year(i)) date += 366;
		else date += 365;
	}
	for (int i = 1; i < month; i++) {
		if (i == 2 && !leap_year(year)) date += 28;
		if (i == 2 && leap_year(year)) date += 29;
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10) date += 31;
		if (i == 4 || i == 6 || i == 9 || i == 11) date += 30;
	}
	date += day;
	return date;
}
int main() {
	int year, month, day, _year, _month, _day;
	scanf("%d %d %d", &year, &month, &day);
	scanf("%d %d %d", &_year, &_month, &_day);
	int date = 0, _date = 0, total_date, after_date = 0;
	date = dates(date, year, month, day);
	_date = dates(_date, _year, _month, _day);
	total_date = _date - date;
	after_date = dates(after_date, year + 1000, month, day);
	if (after_date <= _date) printf("gg\n");
	else printf("D-%d\n", total_date);
	return 0;
}