#define _CRT_SECURE_NO_WRANINGS
#include<stdio.h>
#include<stdlib.h>
void gcd(int Small, int N, int A[]);
void main() {
	int N, S, result = 0, Small = 1000000000;
	int A[100001];//������ ��ġ�� �� �� �ִ� �迭 
	scanf("%d %d", &N, &S);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
		if (S > A[i]) {// ������ ������ ��ġ���� Ŭ �� �� ������ �Ÿ�
			A[i] = S - A[i];
		}
		else {// ������ ������ ��ġ���� ���� �� �� ������ �Ÿ�
			A[i] = A[i] - S;
		}

		if (A[i] <= Small)
			Small = A[i];// ���� ���� �Ÿ����� ���Ϸ��� small�� ��
		//printf("%d\n", A[i]);//�� ������ �Ÿ� ���
	}
	gcd(Small, N, A);
	//return 0;
}
void gcd(int Small, int N, int A[]) {
	int a = 0;
	for (int j = 0; j < N; j++) {
		if (A[j] % Small != 0) {
			gcd(Small - 1, N, A);
			a++;
		}
	}
	if (a == 0)
		printf("%d", Small);
}