#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char stack[100000], top = -1;
void push(char text) {
	stack[++top] = text;
}
int pop() {
	return stack[top--];
}
int main() {
	char s[100000];
	scanf("%s", s);
	int len = strlen(s), count = 0, stick = 0;
	for (int i = 0; i < len; i++) {
		if (s[i] == '(') {
			stick++;
			push(s[i]);
		}
		else {
			if (stack[top] == '(') {
				push(s[i]);
				count += --stick;
			}
			else {
				push(s[i]);
				stick--;
				count++;
			}
		}
	}
	printf("%d\n", count);
	return 0;
}