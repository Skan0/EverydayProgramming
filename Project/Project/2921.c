#include<stdio.h>

int main() {
	int N;
	scanf_s("%d", &N);
	int result = 0;
	for (int i = 0; i < N+1; i++)
	{
		for (int j = i; j < N+1; j++)
		{
			result += i + j;
		}
	}
	printf("%d",result);
	return 0;
}