#include<stdio.h>
int arr[1000001];
int main(void) {
	//������ 1�� �ƴ� �������� ������ �������� ���� ��
	//min �̻� max ������ ���� � �ִ��� ���

	long long min, max;
	scanf_s("%lld %lld", &min, &max);
	int count = 0;
	for (size_t j = min; j < max; j++)
	{
		int temp = 0;
		for (long long i = 2; i * i < max; i++)
		{
			if (j % (i * i)==0) {
				temp++;
				break;
			}
		}
		if (temp != 0)count++;
	}
	
	printf("%d", (int)(1 + max - min - count));
}
#include<math.h>

int main() {
	long long min, max;
	scanf_s("%lld %lld", &min, &max);
	int sq = (int)sqrt(max), cnt = 0;
	for (long i = 2; i <= sq; i++) {
		for (long j = ((min - 1) / i*i + 1) * i*i; j <= max; j += i*i)
			arr[j - min]++;
	}
	for (int i = 0; i < (max - min + 1); i++)
		arr[i] && cnt++;
	printf("%d\n", max - min - cnt + 1);
}