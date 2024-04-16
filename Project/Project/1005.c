#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/// <summary>
/// 어떻게 풀어야 할까?
/// 승리하기 위한 건물 앞에있는 건물들을 건설하고
/// 승리하기위한 건물을 건설해야해
/// 승리하기 위한 건물이 y에 포함되어있는 모든 쌍을 찾고
/// x를 따라가면서 시간을 더해주면 되지 않을까
/// 
/// 그냥 처음부터 가능한 모든 경우를 계산해가면서 진행하다가 
/// 승리건물과 같은 번호의 건물을 만나면 그냥 거기까지 계산하는 식
/// </summary>
void sum(int i,int x,int y[]) {
}
int main(void) {
	int T=0, N=0, K=0, W=0, i=0;
	int D[1001];
	int x[1001];
	int y[1001];
	//테스트 케이스, 건물, 건물간 건설 순서, 승리하기 위한 건물
	//승리하기 위한 건물을 짓는데 걸리는 시간 출력
	scanf_s("%d", &T);
	while(T--)
	{
		scanf_s("%d %d", &N, &K);
		for (i = 0; i < N; i++)
		{//건물당 시간 입력
			scanf_s("%d", &D[i]);
		}
		for (i = 0; i < K; i++)
		{//건물의 건설 순서
			scanf_s("%d %d", &x[i], &y[i]);
		}
		//승리 건물 입력
		scanf_s("%d", &W);
		int* result = malloc(sizeof(int) * N);
		memset(result, 0, sizeof(int) * N);
		//result 동적할당 배열을 0으로 초기화 해준다.
		for (int j = 1; j <= W; j++) {
			if (j == 1)result[j] = D[0];
			for (int i = 0; i < K; i++)
			{
				if (y[i] == j)
					result[j] += D[i];
			}
		}
	}
}