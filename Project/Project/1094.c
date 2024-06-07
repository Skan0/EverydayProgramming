#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int x;
	scanf("%d", &x);
	//길이가 x인 막대가 가지고 싶다
	//64크기의 막대를 계속 2로 나누고 붙여 길이가 
	//x인 막대를 만들고자 함
	
	//가지고 있는 막대중 길이가 가장 짧은 것을 절반
	//반으로 나눈것중 나머지 반을 버렸을 때
	//x보다 크거나 같다면 버린다
	//버리지 않은 막대들을 붙여 x를 만든다
	int fir = 64;
	int count = 0;// 막대들을 쪼개면 하나씩 추가되니까
	while (x!=0) {
		if (x < fir/2) 
		{
			fir /= 2;
			//나눠진 막대중 하나만 가져간다.
		}
		else if (x == 64) {
			count = 1;
			x = 0;
		}
		else
		{
			//temp = fir / 2;
			//if (x > temp * 3) {
			//	
			//}
			//else {
			//	//나눈 막대를 하나 버리기 때문에 막대 개수 변화는 없다
			//	sum = fir /4 *3;
			//	fir /= 2;
			//}
			fir /= 2;
			x -= fir;
			count++;
		}
	}
	printf("%d", count);
}