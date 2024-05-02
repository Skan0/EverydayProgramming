#include<stdio.h>
#include<memory.h>
int xx[4] = { 0,0,-1,1 };
int yy[4] = { 1,-1,0,0 };
int T, M, N, K;

void dfs(int x, int y,int arr[50][50]) {
	for (int i = 0; i < 4; i++) {
		int X = x + xx[i];
		int Y = y + yy[i];
		
		if (X >= 0 && X < N && Y >= 0 && Y < M && arr[X][Y] == 1) {
			arr[X][Y] = 0;
			dfs(X, Y,arr);
		}
	}

	return;
}

int main(void) {
	
	scanf_s("%d", &T);//테스트 케이스
	
	while(T--)
	{
		int result = 0;
		scanf_s("%d %d %d", &M, &N, &K);//밭 가로, 세로, 배추 개수
		int arr[50][50] = { 0 };
		for (size_t j = 0; j < K; j++)
		{
			int x, y;
			scanf_s("%d %d", &x, &y);
			arr[y][x] = 1;
		}
		for (int y = 0; y < N; y++) {
			for (size_t x = 0; x < M; x++)
			{
				if (arr[y][x] == 1) {
					dfs(y, x,arr);
					result++;
				}
				/*if (arr[y][x] == 1) {
					if (y >= 1) {
						if (arr[y - 1][x] == 1) {
							K -= 1;
							arr[y - 1][x] = 0;
						}
					}

					if (x >= 1) {
						if (arr[y][x - 1] == 1) {
							K -= 1;
							arr[y][x - 1] = 0;
						}
					}
				}*/
			}
		}
		printf("%d\n", result);
	}
}