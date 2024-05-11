#include<stdio.h>
#include<string.h>
int main(void) {
	int N,check;
	scanf("%d", &N);
	char arr[51][51],result[51];
	for (size_t i = 0; i < N; i++)
	{
		scanf("%s", arr[i]);
	}
	for (size_t j = 0; j <51; j++)
	{
		check = 1;
		for (size_t i = 1; i < N; i++)
		{
			if (arr[0][j]!=arr[i][j]) {
				check = 0;
			}
		}
		if (check==0) {
			result[j] = '?';
		}
		else
		{
			result[j] = arr[0][j];
		}
	}
	printf("%s", result);
}