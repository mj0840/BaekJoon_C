#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n[3], a, b, c;
	char s[4];
	scanf("%d %d %d", &n[0], &n[1], &n[2]);
	scanf("%s", s);
	if (n[0] < n[1] && n[0] < n[2]) {
		a = n[0];
		if (n[1] < n[2]) {
			b = n[1];
			c = n[2];
		}
		else {
			b = n[2];
			c = n[1];
		}
	}
	if (n[1] < n[0] && n[1] < n[2]) {
		a = n[1];
		if (n[0] < n[2]) {
			b = n[0];
			c = n[2];
		}
		else {
			b = n[2];
			c = n[0];
		}
	}
	if (n[2] < n[0] && n[2] < n[1]) {
		a = n[2];
		if (n[0] < n[1]) {
			b = n[0];
			c = n[1];
		}
		else {
			b = n[1];
			c = n[0];
		}
	}
	for (int i = 0; i < 3; i++) {
		switch (s[i]) {
		case 'A':
			printf("%d ", a);
			break;
		case 'B':
			printf("%d ", b);
			break;
		case 'C':
			printf("%d ", c);
			break;
		}
	}
	return 0;
}