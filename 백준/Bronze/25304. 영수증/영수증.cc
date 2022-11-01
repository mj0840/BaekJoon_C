#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_ARRAY_SIZE 100
struct Array {
	int arr[MAX_ARRAY_SIZE];
};
int main() {
	struct Array a;
	struct Array b;
	struct Array num;
	int x, n, sum = 0;
	scanf("%d\n%d", &x, &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a.arr[i], &b.arr[i]);
		num.arr[i] = a.arr[i] * b.arr[i];
		sum += num.arr[i];
	}
	if (x == sum) printf("Yes\n");
	else printf("No\n");
	return 0;
}