#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m;
	int** arr;//2���� �迭
	int size = 1;
	int min = 0;

	scanf("%d %d", &n, &m);
	arr = malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++)
	{
		arr[i] = malloc(sizeof(int) * m);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%1d", &arr[i][j]);
		}
	}

	min = (m < n) ? m : n;//���簢���� ���ζ� ������ �� ª������ min���� ���� 
	for (int i = 1; i < min; i++)
	{
		for (int j = 0; j + i < n; j++)
		{
			for (int k = 0; k + i < m; k++)
			{
				if (arr[j][k] == arr[j + i][k] && arr[j][k] == arr[j][k + i] && arr[j][k] == arr[j + i][k + i])
				{
					size = i + 1;
					break;
				}
			}
		}
	}

	printf("%d\n", size * size);

	for (int i = 0; i < n; i++)
	{
		free(arr[i]);
	}
	free(arr);
}