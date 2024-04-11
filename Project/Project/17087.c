#define _CRT_SECURE_NO_WRANINGS
#include<stdio.h>
#include<stdlib.h>
void gcd(int Small, int N, int A[]);
void main() {
	int N, S, result = 0, Small = 1000000000;
	int A[100001];//동생의 위치가 들어갈 수 있는 배열 
	scanf("%d %d", &N, &S);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
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