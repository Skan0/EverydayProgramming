#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/// <summary>
/// ��� Ǯ��� �ұ�?
/// �¸��ϱ� ���� �ǹ� �տ��ִ� �ǹ����� �Ǽ��ϰ�
/// �¸��ϱ����� �ǹ��� �Ǽ��ؾ���
/// �¸��ϱ� ���� �ǹ��� y�� ���ԵǾ��ִ� ��� ���� ã��
/// x�� ���󰡸鼭 �ð��� �����ָ� ���� ������
/// 
/// �׳� ó������ ������ ��� ��츦 ����ذ��鼭 �����ϴٰ� 
/// �¸��ǹ��� ���� ��ȣ�� �ǹ��� ������ �׳� �ű���� ����ϴ� ��
/// </summary>
void sum(int i,int x,int y[]) {
}
int main(void) {
	int T=0, N=0, K=0, W=0, i=0;
	int D[1001];
	int x[1001];
	int y[1001];
	//�׽�Ʈ ���̽�, �ǹ�, �ǹ��� �Ǽ� ����, �¸��ϱ� ���� �ǹ�
	//�¸��ϱ� ���� �ǹ��� ���µ� �ɸ��� �ð� ���
	scanf_s("%d", &T);
	while(T--)
	{
		scanf_s("%d %d", &N, &K);
		for (i = 0; i < N; i++)
		{//�ǹ��� �ð� �Է�
			scanf_s("%d", &D[i]);
		}
		for (i = 0; i < K; i++)
		{//�ǹ��� �Ǽ� ����
			scanf_s("%d %d", &x[i], &y[i]);
		}
		//�¸� �ǹ� �Է�
		scanf_s("%d", &W);
		int* result = malloc(sizeof(int) * N);
		memset(result, 0, sizeof(int) * N);
		//result �����Ҵ� �迭�� 0���� �ʱ�ȭ ���ش�.
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