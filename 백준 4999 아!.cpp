#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char person[1001], doctor[1001];
	int cnt_person = 0, cnt_doctor = 0;
	scanf("%s %s", person, doctor);
	for (int i = 0; i < strlen(person); i++) {
		if (person[i] == 'a' || person[i] == 'h') cnt_person++;
	}
	for (int i = 0; i < strlen(doctor); i++) {
		if (doctor[i] == 'a' || doctor[i] == 'h') cnt_doctor++;
	}
	if (cnt_person >= cnt_doctor) printf("go\n");
	else printf("no\n");
	return 0;
}