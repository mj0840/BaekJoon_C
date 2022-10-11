#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int stack[10000];
int top = -1;

void push(int num) {
	stack[++top] = num;
}
int pop() {
	if (top == -1) return -1;
	return stack[top--];
}
int size() {
	return top + 1;
}
int empty() {
	return top == -1;
}
int toptop() {
	if (empty()) return -1;
	else return stack[top];
}

int main() {
	int n, num;
	char s[6];
	scanf("%d", &n);
	while(n--) {
		scanf("%s", s);
		if (s[0] == 'p' && s[1] == 'u') {
			scanf("%d", &num);
			push(num);
		}
		else if (s[0] == 'p' && s[1] == 'o') printf("%d\n", pop());
		else if (s[0] == 's') printf("%d\n", size());
		else if (s[0] == 'e') printf("%d\n", empty());
		else printf("%d\n", toptop());
	}
	return 0;
}