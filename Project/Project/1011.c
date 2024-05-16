#include<stdio.h>

int main(void) {
	//이전에 이동한 거리에 -1 0 +1 한 값 만큼 이동할 수 있다.
	//음수나 0의 거리는 이동하는 의미가 없다.
	//도착 지점 직전의 이동거리는 1이어야 한다.
	//이동 횟수의 최솟값

	int t, x, y, move = 0, dis = 0;
	scanf_s("%d", &t);
	while (t--) {
		scanf_s("%d%d", &x, &y);
		dis = y - x;
		//1씩 늘리고 1씩 줄일 수 있으니까
		while (1) {
			//printf("%d %d\n", dis, move);
			if (dis <= move * (move + 1))
				break;
			move++;
		}
		if (dis <= move * move) {
			printf("%d\n", move * 2 - 1);
		}
		else {
			printf("%d",2 * move);
		}

	}
}