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
	//n���� �����ڰ� ��ʸ�Ʈ �������� �ܷ�µ� ó���� ����ؼ� �̱����� ���� ������ 1���� �ǰ� 
	//�� �������� �̱����� 2�� 3�� �̷��� ������ �ο��� Ȧ����� ������ ������ �������� �ȴ�
	//�Ѹ��� ���� ������ �ݺ��Ѵ�
	int A, B, participants, count = 0;
	scanf_s("%d%d%d", &participants, &A, &B);
	//���� ��� �� �� ���� ���� -1�� ��� ��� �� �� ���� ���� �ֳ�? ��ʸ�Ʈ�� ������ ��⸦ �� �̰ܼ� ���µ� ���ٰ� ����.
	//��ῡ�� �¸��� �������� �Ѿ�� �Լ�
	//���Ŀ� A�� B�� ���� ��⸦ ġ�� �� �ִ°�
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