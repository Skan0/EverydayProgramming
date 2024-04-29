#include<stdio.h>

int main(void) {
	int arr[9][9];
	int big=0, x, y;
	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			scanf_s("%d", &arr[i][j]);
			if (arr[i][j] >= big) {
				big = arr[i][j];
				x = j;
				y = i;
			}
		}
	}
	printf("%d\n%d %d", big, y + 1, x + 1);
}