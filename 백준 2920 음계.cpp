#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int scale[8], ascending = 1, descending = 8;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &scale[i]);
	}
	if (scale[0] == ascending++) {
		for (int i = 1; i < 8; i++) {
			if (scale[i] == ascending++);
			else {
				printf("mixed\n");
				return 0;
			}
		}
		printf("ascending\n");
	}
	else if (scale[0] == descending--) {
		for (int i = 1; i < 8; i++) {
			if (scale[i] == descending--);
			else {
				printf("mixed\n");
				return 0;
			}
		}
		printf("descending\n");
	}
	else {
		printf("mixed\n");
		return 0;
	}
}