#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char num[6];
	int len, cnt;
	while (1) {
		scanf("%s", num);
		if (num[0] == '0') break;
		len = strlen(num);
		cnt = 0;
		for (int i = 0; i < len / 2; i++) {
			if (num[i] != num[len - i - 1]) cnt++;
		}
		printf("%s\n", cnt == 0 ? "yes" : "no");
	}
	return 0;
}