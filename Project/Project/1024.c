#include<stdio.h>
#include<math.h>
#include<string.h>
void calc(int N) {
	
}

int main(void) {
	int N, L;
	scanf_s("%d %d", &N, &L);
	//���� N�� ��� L�� �̻��� ���� �ٸ� ���ӵȼ����� ������ ��Ÿ����.
	//�ּ� L�� ������ �ȵɰŰ����� -1�� ����Ѵ�
	while (1) {
		int result[100];
		int temp = 0;
		
		int start = (int)(2 * N - L * L + L) / (2 * L);
		int end = start + L - 1;

		if (start < 0) {
			start += abs(start);
			end += abs(start);
		}
		for (size_t i = start; i < end + 1; i++)
		{
			result[i - start] = i;
			temp += i;
		}
		if (temp == N) {
			for (size_t i = 0; i < L; i++)
			{
				printf("%d ", result[i]);
			}
			break;
		}
		else {
			L += 1;
			if (L > 100) {
				printf("-1");
				break;
			}
		}
	}
	
	
}