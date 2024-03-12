#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void sort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		arr[i] = arr[i + 1];
		arr[i + 1] = 0;
	}
}
int main() {
	int n, arr1[1000] = { 0 }, arr2[1000] = { 0 }, cnt = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		arr1[i] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		arr2[i] = arr1[0];
		sort(arr1, n);
		for (int j = 0; j < n - i; j++) {
			if (arr1[j] == 0) {
				arr1[j] = arr1[0];
				sort(arr1, n);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr2[i] != 0) printf("%d ", arr2[i]);
	}
	return 0;
}