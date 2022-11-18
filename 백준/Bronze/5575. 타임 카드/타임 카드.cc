#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int hb, mb, sb, ha, ma, sa;
int before, after;
struct person {
	int hour;
	int minute;
	int second;
};
void time(struct person* man) {
	int sum = after - before;
	man->hour = sum / 3600;
	sum %= 3600;
	man->minute = sum / 60;
	sum %= 60;
	man->second = sum;
}
int main() {
	struct person a, b, c;
	for (int i = 0; i < 3; i++) {
		scanf("%d %d %d %d %d %d", &hb, &mb, &sb, &ha, &ma, &sa);
		before = (hb * 3600 + mb * 60 + sb);
		after = (ha * 3600 + ma * 60 + sa);
		if (i == 0) time(&a);
		if (i == 1) time(&b);
		if (i == 2) time(&c);
	}
	printf("%d %d %d\n", a.hour, a.minute, a.second);
	printf("%d %d %d\n", b.hour, b.minute, b.second);
	printf("%d %d %d\n", c.hour, c.minute, c.second);
	return 0;
}