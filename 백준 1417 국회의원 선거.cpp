#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int n, point[50] = { 0 }, max_point, max;
int search() {
	max_point = -1;
	for (int i = 0; i < n; i++) {
		if (point[i] >= max_point) {
			max_point = point[i];
			max = i;
		}
	}
	return max == 0;
}
int main() {
	scanf("%d", &n);
	int count = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &point[i]);
	}
	while (1) {
		if (search()) {
			printf("%d\n", count);
			return 0;
		}
		else {
			point[max]--;
			point[0]++;
			count++;
		}
	}
}