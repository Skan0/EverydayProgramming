#define _CRT_SECURE_NO_WRANINGS
#include<stdio.h>
#include<stdlib.h>
int gcd(int a, int b) {
	while (b > 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}	
	return a;
}
int main() {
	int N, S, result = 0, Small = 1000000000;
	int A[100001];//������ ��ġ�� �� �� �ִ� �迭 
	scanf_s("%d %d", &N, &S);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &A[i]);
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
	for (int i = 0; i < N; i++)
	{
		Small = gcd(A[i], Small);
	}
	printf("%d",Small);
	return 0;
}