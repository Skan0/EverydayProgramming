#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void) {
	char n[11];
	int b;
	long int result = 0;
	scanf("%s %d", n, &b);
	int length = strlen(n);
	//printf("%d", length);
	for (int i =length; i >0; i--)
	{		
		int temp;
		if ('Z' >= n[length-i] && n[length - i] >= 'A') temp = (int)(n[length - i] - 'A' + 10);
		else temp = (int)n[length - i] -48;
		
		result += temp * pow(b, i-1);	
	}
	printf("%ld", result);
}