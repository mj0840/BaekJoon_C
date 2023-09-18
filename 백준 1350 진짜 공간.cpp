#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, cluster, file[50];
	long long int count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &file[i]);
	}
	scanf("%d", &cluster);
	for (int i = 0; i < n; i++) {
		count += file[i] / cluster;
		file[i] %= cluster;
		if (file[i]) count++;
	}
	printf("%lld\n", count * cluster);
	return 0;
}