#include<stdio.h>
//int next(int n) {
//	if (n % 2 == 0) {
//		return n / 2;
//	}
//	else {
//		return n / 2 + 1;
//	}
//}

int main(void) {
	//n명의 참가자가 토너먼트 형식으로 겨루는데 처음에 경기해서 이긴사람이 다음 라운드의 1번이 되고 
	//그 다음부터 이긴사람이 2번 3번 이런식 라운드의 인원이 홀수라면 마지막 선수가 부전승이 된다
	//한명이 남을 때까지 반복한다
	int A, B, participants, count = 0;
	scanf_s("%d%d%d", &participants, &A, &B);
	//서로 대결 할 수 없을 때는 -1을 출력 대결 할 수 없을 때가 있나? 토너먼트고 이전의 경기를 다 이겨서 오는데 없다고 본다.
	//대결에서 승리해 다음으로 넘어가는 함수
	//이후에 A와 B가 서로 경기를 치룰 수 있는가
	/*if (participants == 2) {
		printf("%d", 1);
		return 0;
	}
	while (1) {
		count++;
		if (B - A == 1) {
			if (A % 2 == 1) {
				printf("%d", count);
				return 0;
			}
		}
		A = next(A);
		B = next(B);
	*/
	while (A != B) {
		A = (A + 1) / 2;
		B = (B + 1) / 2;
		count++;
	}
	printf("%d", count);
}