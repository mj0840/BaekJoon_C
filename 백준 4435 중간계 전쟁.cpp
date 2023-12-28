#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int t, gadalf, sauron, g[6], s[7];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d %d %d %d", &g[0], &g[1], &g[2], &g[3], &g[4], &g[5]);
		scanf("%d %d %d %d %d %d %d", &s[0], &s[1], &s[2], &s[3], &s[4], &s[5], &s[6]);
		gadalf = g[0] + g[1] * 2 + (g[2] + g[3]) * 3 + g[4] * 4 + g[5] * 10;
		sauron = s[0] + (s[1] + s[2] + s[3]) * 2 + s[4] * 3 + s[5] * 5 + s[6] * 10;
		if (gadalf > sauron) printf("Battle %d: Good triumphs over Evil\n", i + 1);
		else if (gadalf < sauron) printf("Battle %d: Evil eradicates all trace of Good\n", i + 1);
		else printf("Battle %d: No victor on this battle field\n", i + 1);
	}
	return 0;
}