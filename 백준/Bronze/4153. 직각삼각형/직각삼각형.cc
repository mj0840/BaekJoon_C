#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n1, n2, n3;
	int heru, auset, ausar;
	for (int i = 0; i < 100000000; i++) {
		scanf("%d %d %d", &n1, &n2, &n3);
		heru = n1 > n2 ? (n1 > n3 ? n1 : (n3 > n2 ? n3 : n2)) : (n2 > n3 ? n2 : (n3 > n1 ? n3 : n1));
		auset = n1 == heru ? (n2 > n3 ? n2 : n3) : (n2 == heru ? (n1 > n3 ? n1 : n3) : (n1 > n2 ? n1 : n2));
		ausar = n1 == heru ? (n2 == auset ? n3 : n2) : (n2 == heru ? (n1 == auset ? n3 : n1) : (n1 == auset ? n2 : n1));
		if (ausar == auset && auset == heru && heru == 0) return 0;
		if (ausar * ausar + auset * auset == heru * heru) printf("right\n");
		else printf("wrong\n");
	}
}