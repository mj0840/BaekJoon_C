#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, h, w, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int room[100][100] = { 0 }, cnt = 0, p;
		scanf("%d %d %d", &h, &w, &n);
		while (n > 0) {
			for (int j = 0; j < h; j++) {
				room[j][cnt]++;
				n--;
				p = j + 1;
				if (n == 0) break;
			}
			cnt++;
		}
		printf("%d%02d\n", p, cnt);
	}
	return 0;
}