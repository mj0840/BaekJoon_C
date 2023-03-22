#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, cm, kg;
	double sum;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &cm, &kg);
		sum = (double)kg / (((double)cm / 100) * ((double)cm / 100));
		if (cm < 140.1) printf("6\n");
		if (cm >= 140.1 && cm < 146) printf("5\n");
		if (cm >= 146 && cm < 159) printf("4\n");
		if (cm >= 159 && cm < 161) {
			if (sum >= 16 && sum < 35) printf("3\n");
			else printf("4\n");
		}
		if (cm >= 161 && cm < 204) {
			if (sum >= 20 && sum < 25) printf("1\n");
			if (sum >= 18.5 && sum < 20 || sum >= 25 && sum < 30) printf("2\n");
			if (sum >= 16 && sum < 18.5 || sum >= 30 && sum < 35) printf("3\n");
			if (sum < 16 || sum >= 35) printf("4\n");
		}
		if (cm >= 204) printf("4\n");
	}
	return 0;
}