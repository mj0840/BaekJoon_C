#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int v, acnt = 0, bcnt = 0;
	char s[16];
	scanf("%d", &v);
	for (int i = 0; i <= v; i++) {
		scanf("%c", &s[i]);
		switch (s[i]) {
		case 'A':
			acnt++;
			break;
		case 'B':
			bcnt++;
			break;
		}
	}
	if (acnt == bcnt) printf("Tie");
	if (acnt > bcnt) printf("A");
	if (acnt < bcnt) printf("B");
	return 0;
}