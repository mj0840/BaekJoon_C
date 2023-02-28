#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int h, m, s, q, t, c, second;
	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &q);
	second = h * 3600 + m * 60 + s;
	for (int i = 0; i < q; i++) {
		scanf("%d", &t);
		switch (t) {
		case 1:
			scanf("%d", &c);
			second += c;
			break;
		case 2:
			scanf("%d", &c);
			second -= c;
			break;
		case 3:
			for (second; second < 0; second += 86400);
			second %= 86400;
			h = second / 3600;
			m = (second % 3600) / 60;
			s = second % 60;
			printf("%d %d %d\n", h, m, s);
			break;
		}
	}
	return 0;
}