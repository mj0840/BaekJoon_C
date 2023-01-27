#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n1, n2, n3, max, mid, min;
	for (int i = 0; i < 100000000; i++) {
		scanf("%d %d %d", &n1, &n2, &n3);
		if (n1 == n2 && n2 == n3 && n3 == 0) return 0;
		max = n1 > n2 ? (n1 > n3 ? n1 : (n3 > n2 ? n3 : n2)) : (n2 > n3 ? n2 : (n3 > n1 ? n3 : n1));
		mid = max == n1 ? (n2 > n3 ? n2 : n3) : (max == n2 ? (n1 > n3 ? n1 : n3) : (max == n3 ? n1 : n2));
		min = max == n1 ? (mid != n2 ? n2 : n3) : (max == n2 ? (mid != n1 ? n1 : n3) : (mid != n1 ? n1 : n2));
		if (max < mid + min) {
			if (n1 == n2 && n2 == n3) printf("Equilateral\n");
			else if (n1 == n2 || n1 == n3 || n2 == n3) printf("Isosceles\n");
			else printf("Scalene\n");
		}
		else printf("Invalid\n");
	}
}