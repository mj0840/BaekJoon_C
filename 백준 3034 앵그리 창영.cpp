#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int n, w, h, tmp;
	double box;
	scanf("%d %d %d", &n, &w, &h);
	tmp = pow(w, 2) + pow(h, 2);
	box = sqrt(tmp);
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		if (tmp <= box) printf("DA\n");
		else printf("NE\n");
	}
	return 0;
}