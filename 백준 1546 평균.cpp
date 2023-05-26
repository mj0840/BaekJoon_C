#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, num, max = 0;
	double sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (max < num) max = num;
		sum += num;
	}
	sum = sum / max * 100 / n;
	if (sum - (int)sum == 0) printf("%.1lf\n", sum);
	else printf("%lf\n", sum);
	return 0;
}