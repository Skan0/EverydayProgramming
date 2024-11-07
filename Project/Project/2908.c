#include<stdio.h>
#include<string.h>
int main(void) {
	int n1,n2;
	scanf_s("%d %d", &n1,&n2);
	int third, sec, fir;
	
	third = n1 / 100;
	n1 -= n1 / 100 * 100;
	sec = n1 / 10;
	n1 -= n1 / 10 * 10;
	fir = n1;
	int sum1 = fir * 100 + sec * 10 + third;
	third = n2 / 100;
	n2 -= n2 / 100 * 100;
	sec = n2 / 10;
	n2 -= n2 / 10 * 10;
	fir = n2;
	int sum2 = fir * 100 + sec * 10 + third;
	printf("%d", (0 < sum1 - sum2 ? sum1 : sum2));
}