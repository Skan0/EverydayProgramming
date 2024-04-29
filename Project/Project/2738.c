#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int N, M,temp;
	scanf_s("%d %d", &N, &M);
	int** mat = (int**)malloc(sizeof(int*) * N);
	for (int i = 0; i < N; i++)
	{
		mat[i] = (int*)malloc(sizeof(int) * M);
	}

	for (size_t i = 0; i < N; i++)
	{
		for (int h = 0; h < M; h++) {
			scanf_s("%d", &mat[i][h]);
		}
	}
	

	for (size_t i = 0; i < N; i++)
	{
		
		for (int h = 0; h < M; h++) {
			scanf_s("%d", &temp);
			mat[i][h] += temp;
		}
	}
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < M; j++)
		{
			if(j==M-1)
				printf("%d\n", mat[i][j]);
			else
				printf("%d ", mat[i][j]);
		}
	}
	free(mat);
}