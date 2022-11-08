#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char name[10];
	int o, m;
	for (int i = 0; i < 100000; i++) {
		scanf("%s %d %d", name, &o, &m);
		if (name[0] == '#') return 0;
		else {
			if (o > 17 || m >= 80) printf("%s Senior\n", name);
			else printf("%s Junior\n", name);
		}
	}
}