#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct cake {
	int x, y, z;
};
int main() {
	struct cake a, b, c;
	scanf("%d %d %d", &a.x, &a.y, &a.z);
	scanf("%d %d %d", &c.x, &c.y, &c.z);
	b.x = c.x - a.z;
	b.y = c.y / a.y;
	b.z = c.z - a.x;
	printf("%d %d %d", b.x, b.y, b.z);
	return 0;
}