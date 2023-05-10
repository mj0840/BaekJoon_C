#define _crt_secure_no_warnings
#include<stdio.h>
int main() {
	int by, bm, bd, ay, am, ad, sum;
	scanf("%d %d %d", &by, &bm, &bd);
	scanf("%d %d %d", &ay, &am, &ad);
	if (bm < am || (bm == am && bd <= ad)) sum = ay - by;
	else sum = ay - by - 1;
	printf("%d\n", sum);
	printf("%d\n", ay - by + 1);
	printf("%d\n", ay - by);
	return 0;
}