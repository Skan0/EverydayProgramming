#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	long long sum = 0;
	for (size_t i = 0; i < 3; i++)
	{
		long long temp;
		scanf("%lld", &temp);
		sum += temp;
	}
	printf("%lld", sum);
}