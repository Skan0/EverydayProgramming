#include<stdio.h>
int main(void) {
	int N, M, six, one, price[50] = { 0, }, maxsix = 1000, maxone = 1000;
	scanf_s("%d %d", &N, &M);
	for (int i = 0; i < M; i++)
	{
		scanf_s("%d %d", &six, &one);
		six < maxsix ? maxsix = six : maxsix;
		one < maxone ? maxone = one : maxone;
	}
	int a = N / 6;
	int b = N % 6;
	if (maxone * b > maxsix) {
		printf("%d", maxsix * a + maxsix);
	}
	else if (maxone * 6 < maxsix) {
		printf("%d", maxone * N);
	}
	else {
		printf("%d", maxone * b + maxsix * a);
	}
}
//#include <stdio.h>
//
//int main()
//{
//	int n, m, value = 0, minpakage = 1000, minpiece = 1000;
//	int pakage, piece;
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 0; i < m; i++)
//	{
//		scanf_s("%d %d", &pakage, &piece);
//		if (minpakage > pakage) minpakage = pakage;
//		if (minpiece > piece) minpiece = piece;
//	}
//	if (minpakage > minpiece * 6)
//		value = minpiece * n; //������ 6���� ����� ��°ź��� �� ��
//	else if ((((n / 6) + 1) * minpakage) < ((n / 6) * minpakage) + (n % 6 * minpiece))// ����� �ʰ��ϰ� ��°� ������ ��°Ͱ� ������ �� ���� �� ��
//	{
//		if (n > 6) value = (((n / 6) + 1) * minpakage);//n�� 6���� Ŭ �� 
//		if (n <= 6) value = minpakage;//
//	}
//	else//���� + ����� �̵��� ��
//	{
//		if (n > 6)   value = ((n / 6) * minpakage) + (n % 6 * minpiece);
//		if (n <= 6) value = minpakage*1;
//	}
//	printf("%d", value);
//	return 0;
//}