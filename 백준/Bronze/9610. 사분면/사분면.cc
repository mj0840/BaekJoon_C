#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, x, y;
	int q[4] = { 0 }, axis = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		if (x == 0 || y == 0) axis++;
		else if (x > 0 && y > 0) q[0]++;
		else if (x < 0 && y > 0) q[1]++;
		else if (x < 0 && y < 0) q[2]++;
		else q[3]++;
	}
	printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d", q[0], q[1], q[2], q[3], axis);
	return 0;
}