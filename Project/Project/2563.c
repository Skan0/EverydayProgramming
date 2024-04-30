#include<stdio.h>

int main(void) {
	//300-8*5
	int n, x, y;
	scanf_s("%d", &n);
	int arr[100][100] = { 0, };
	int sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		scanf_s("%d %d", &x, &y);
		for (size_t j = y; j < y+10; j++)
		{
			for (size_t l = x; l < x+10; l++)
			{
				arr[j][l] += 1;
			}
		}
	}
	for (size_t i = 0; i < 100; i++)
	{
		for (size_t j = 0; j < 100; j++)
		{
			if (arr[i][j] > 0) {
				sum++;
			}
		}
	}
	printf("%d", sum);
}