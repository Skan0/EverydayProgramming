#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void) {
	long long int l, r, count;
	scanf("%lld %lld", &l, &r);
	count = r-l;
	long long result = 2000000000;
	do{
		int t=0;
		char temp[10];
		sprintf(temp, "%lld", l + count);
		//printf("%s\n", temp);
		for (int i = 0; i < strlen(temp); i++) {
			if (temp[i]== '8')t++;
		}
		count -= count > 0 ? 1 : 0;
		result = t < result ? t : result;
	} while (count);
	printf("%lld", result);
}