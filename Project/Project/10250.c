#include<stdio.h>

int main() {
	int T;
	int H, W, N;//�� ��, �� ���� �� ��, ���° �մ�
	scanf_s("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf_s("%d %d %d", &H, &W, &N);
		int height = N % H ;
		int width = N / H + 1;
		if (height == 0) {
			height = H;
			width --;
		}
		printf("%d%02d\n", height , width);
	}
	return 0;
}