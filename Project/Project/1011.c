#include<stdio.h>

int main(void) {
	//������ �̵��� �Ÿ��� -1 0 +1 �� �� ��ŭ �̵��� �� �ִ�.
	//������ 0�� �Ÿ��� �̵��ϴ� �ǹ̰� ����.
	//���� ���� ������ �̵��Ÿ��� 1�̾�� �Ѵ�.
	//�̵� Ƚ���� �ּڰ�

	int t, x, y, move = 0, dis = 0;
	scanf_s("%d", &t);
	while (t--) {
		scanf_s("%d%d", &x, &y);
		dis = y - x;
		//1�� �ø��� 1�� ���� �� �����ϱ�
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