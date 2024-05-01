#include<stdio.h>
#include<stdlib.h>


int main(void) {
	int T, N, M;
	scanf_s("%d", &T);
	//테스트 케이스 개수
	for (int i = 0; i < T; i++)
	{
		int temp = 1;
		scanf_s("%d %d", &N, &M);
		for (int j = 0; j < N; j++)
		{
			temp *= M - j;
			temp /= 1 + j;
		}
		printf("%d\n", temp);
	}
}