#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int s, k, h, sum;
	scanf("%d %d %d", &s, &k, &h);
	sum = s + k + h;
	if (sum >= 100) printf("OK");
	else {
		if (s < k && s < h) printf("Soongsil");
		if (k < s && k < h) printf("Korea");
		if (h < s && h < k) printf("Hanyang");
	}
	return 0;
}