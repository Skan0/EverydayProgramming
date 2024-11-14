#include<stdio.h>

int main(void) {
	int n;
	scanf_s("%d", &n);
	// n이 홀수면 sk 짝수면 cy가 이긴다.
	// 돌은 한번에 1개 혹은 3개를 가져갈 수 있다.
	// 마지막 돌을 가져가는 사람이 승리한다.



	if (n%2 == 0) {
		printf("CY"); 
	}
	else {
		printf("SK");
	}
}