#include<stdio.h>
#include<math.h>
int main() {
	int T, x1, y1, x2, y2, n, Cx, Cy, r;
	int count = 0;
	scanf_s("%d", &T);
	for (int i = 0; i < T; i++)
	{
		count = 0;
		scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf_s("%d", &n);
		//�������� �༺�� ��輱�� ���� ���� ��� ī��Ʈ ���� �ʴ´�
		//��������� ���������� ���µ� ���ذ� �� �� �־�
		//������̳� �������� �༺�ȿ� �־ ��踦 ������ �ϴ°�
		for (int j = 0; j < n; j++) {
			
			scanf_s("%d %d %d", &Cx, &Cy, &r);
			//�༺�� ��迡 ������ ī��Ʈ �� �ϴϱ�
			//printf("%f : %f + %f\n", pow(r, 2), pow(x2 - Cx,2), pow(y2 - Cy,2));
			if ( pow(r, 2) > pow(x2-Cx, 2) + pow(y2-Cy, 2)&& pow(r, 2) < pow(x1 - Cx, 2) + pow(y1 - Cy, 2) ) {
				//���������� �༺��� �ȿ� �ְ� ��������� �� �༺ �ۿ� �ִ°� �˻��Ѵ�.
				//printf("%f : %f + %f\n", pow(r, 2), pow(x2 - Cx,2), pow(y2 - Cy,2));
				count++;
			}
			else if (pow(r, 2) < pow(x2 - Cx, 2) + pow(y2 - Cy, 2) && pow(r, 2) > pow(x1 - Cx, 2) + pow(y1 - Cy, 2)) {				
				//���������� �༺��� �ۿ� �ְ� ��������� �� �༺ �ȿ� �ִ°� �˻��Ѵ�.
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}