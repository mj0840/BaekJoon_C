#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int h, m, s, h_, m_, s_, sum, sum_, tmp;
	scanf("%02d:%02d:%02d", &h, &m, &s);
	scanf("%02d:%02d:%02d", &h_, &m_, &s_);
	sum = h * 3600 + m * 60 + s;
	sum_ = h_ * 3600 + m_ * 60 + s_;
	tmp = (sum_ + 86400) - sum;
	if (tmp == 86400) {
		printf("24:00:00\n");
		return 0;
	}
	tmp %= 86400;
	h = tmp / 3600;
	m = (tmp % 3600) / 60;
	s = tmp % 60;
	printf("%02d:%02d:%02d\n", h, m, s);
	return 0;
}