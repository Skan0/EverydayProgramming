#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
    int a, b, c, n;
    int temp;
    scanf("%d", &n);
    scanf("%d", &temp);
    c = temp % 10;
    b = temp % 100 - c;
    a = temp - b - c;
   
    printf("%d\n%d\n%d\n%d", n * c, n * b/10, n * a/100, n * (a + b + c));
}