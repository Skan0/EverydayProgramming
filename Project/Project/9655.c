#include<stdio.h>

int main(void) {
	int n;
	scanf_s("%d", &n);
	// n�� Ȧ���� sk ¦���� cy�� �̱��.
	// ���� �ѹ��� 1�� Ȥ�� 3���� ������ �� �ִ�.
	// ������ ���� �������� ����� �¸��Ѵ�.



	if (n%2 == 0) {
		printf("CY"); 
	}
	else {
		printf("SK");
	}
}