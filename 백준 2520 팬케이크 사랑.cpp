#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int mlik, egg_yolk, sugar, salt, flour, banana, strawberries, chocolate, walnut, n, type;
	float pancake;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d %d", &mlik, &egg_yolk, &sugar, &salt, &flour);
		scanf("%d %d %d %d", &banana, &strawberries, &chocolate, &walnut);
		type = banana;
		type += strawberries / 30;
		type += chocolate / 25;
		type += walnut / 10;
		pancake = mlik / 0.5;
		if (pancake > (float)egg_yolk * 2) pancake = (float)egg_yolk * 2;
		if (pancake > (float)sugar * 4) pancake = (float)sugar * 4;
		if (pancake > (float)salt * 16) pancake = (float)salt * 16;
		if (pancake > (float)flour / 9 * 16) pancake = (float)flour / 9 * 16;
		printf("%d\n", pancake < type ? (int)pancake : type);
	}
	return 0;
}