#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(void) {
	long int n;
	int b;
	char result[30];
	scanf("%ld %d", &n, &b);
	int i = 0;
	
	while (n) {
		int temp = n % b;
		if (b > 10) {
			if (temp <= 9) {
				result[i] = temp;
			}
			else { //b�� 10�̻��� ��
				result[i] = 'A' + temp - 10;
			}
		}
		else {//������ 10 ���� ���� �� 
			result[i] = temp;
		}
		n /= b;
		i++;
		if (n <= b) {
			if(b<10)
				result[i] = n;
			else {
				result[i] = 'A' + temp - 10;
			}
			break;
		}
	}
	printf("\n");
	while (i--)printf("%c", (char)result[i]);
}