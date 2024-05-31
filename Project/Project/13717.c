#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void) {
	int n, needCandy, useCandy, manyEvol =0, total=0;
	char name[20], result[20];
	scanf("%d", &n);
	while (n--) {
		scanf("%s", name);
		scanf("%d %d", &needCandy, &useCandy);
		int temp=0;
		while (useCandy >= needCandy) {
			useCandy -= needCandy;
			useCandy += 2;
			temp++;
		}
		if (temp > manyEvol) {
			manyEvol = temp;
			strcpy(result, name);
		}
		total += temp;
	}
	printf("%d\n%s", total, result);
}