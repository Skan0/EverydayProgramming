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
	int A[100001];//동생의 위치가 들어갈 수 있는 배열 
	scanf_s("%d %d", &N, &S);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &A[i]);
		if (S > A[i]) {// 누나가 동생의 위치보다 클 때 둘 사이의 거리
			A[i] = S - A[i];
		}
		else {// 누나가 동생의 위치보다 작을 때 둘 사이의 거리
			A[i] = A[i] - S;
		}

		if (A[i] <= Small)
			Small = A[i];// 가장 작은 거리값을 구하려고 small과 비교
		//printf("%d\n", A[i]);//둘 사이의 거리 출력
	}
	for (int i = 0; i < N; i++)
	{
		Small = gcd(A[i], Small);
	}
	printf("%d",Small);
	return 0;
}