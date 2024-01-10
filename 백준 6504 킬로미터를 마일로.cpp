#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int beat_value[21] = { 1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711 };
	int beat[21];
	int t, x, sum;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &x);
		for (int j = 0; j < 21; j++) {
			beat[j] = 0;
		}
		sum = 0;
		for (int j = 20; j >= 0; j--) {
			if (x / beat_value[j]) {
				beat[j]++;
				x -= beat_value[j];
			}
		}
		for (int j = 20; j > 0; j--) {
			if (beat[j]) {
				sum += beat_value[j - 1];
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}