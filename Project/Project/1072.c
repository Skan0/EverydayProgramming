#include<stdio.h>

int main(void) {
	double x, y;
	scanf_s("%lf %lf", &x, &y);
	long long z = y / x * 100;
	long long zz = z;
	int count = 0;
	if (z >= 99) {
		printf("-1");
	}
	else {//n���� ��⸦ �߰��� �ؼ� �·��� �ٲ� ����� ��
		/*if ((int)((z + 1) * x - y * 100) % (99 - z) == 0) {
			printf("%d", (int)((z + 1) * x - y * 100) / (99 - z));
		}
		else {
			printf("%d", (int)((z + 1) * x - y * 100) / (100 - z));
		}*/
		while (z==zz) {
			count++;
			zz = (y + count) / (x + count) * 100;
		}
		printf("%d", count);
	}
}