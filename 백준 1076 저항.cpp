#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int count = 1;
	long long int result = 0;
	int multiplication[10];
	char color[3][7];
	scanf("%s %s %s", color[0], color[1], color[2]);
	for (int i = 0; i < 10; i++) {
		multiplication[i] = count;
		count *= 10;
	}
	for (int i = 0; i < 3; i++) {
		if (color[i][0] == 'b') {
			if (color[i][3] == 'c') count = 0;
			if (color[i][3] == 'w') count = 1;
			if (color[i][3] == 'e') count = 6;
		}
		if (color[i][0] == 'r') count = 2;
		if (color[i][0] == 'o') count = 3;
		if (color[i][0] == 'y') count = 4;
		if (color[i][0] == 'g') {
			if (color[i][3] == 'e') count = 5;
			if (color[i][3] == 'y') count = 8;
		}
		if (color[i][0] == 'v') count = 7;
		if (color[i][0] == 'w') count = 9;
		if (i == 0) result += (long long int)count * 10;
		if (i == 1) result += (long long int)count;
		if (i == 2) result *= (long long int)multiplication[count];
	}
	printf("%lld\n", result);
	return 0;
}