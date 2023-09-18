#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int current_time[3], start_time[3], remaining_time[3];
	scanf("%d:%d:%d", &current_time[0], &current_time[1], &current_time[2]);
	scanf("%d:%d:%d", &start_time[0], &start_time[1], &start_time[2]);
	remaining_time[0] = start_time[0] - current_time[0];
	remaining_time[1] = start_time[1] - current_time[1];
	remaining_time[2] = start_time[2] - current_time[2];
	if (remaining_time[2] < 0) {
		remaining_time[1]--;
		remaining_time[2] += 60;
	}
	if (remaining_time[1] < 0) {
		remaining_time[0]--;
		remaining_time[1] += 60;
	}
	if (remaining_time[0] < 0) {
		remaining_time[0] += 24;
	}
	printf("%02d:%02d:%02d\n", remaining_time[0], remaining_time[1], remaining_time[2]);
	return 0;
}