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