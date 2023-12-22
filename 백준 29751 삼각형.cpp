#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    float w, h;
    scanf("%f %f", &w, &h);
    printf("%.1f\n", w * h / 2);
    return 0;
}