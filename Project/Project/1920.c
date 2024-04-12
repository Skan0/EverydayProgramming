#include<stdio.h>
#include<stdlib.h>
void inc_insertion_sort(int list[], int first, int last, int gap) {
	int i, j, key;

	for (i = first + gap; i <= last; i = i + gap) {
		key = list[i]; // ���� ���Ե� ������ i��° ������ key ������ ����

		// ���� ���ĵ� �迭�� i-gap�����̹Ƿ� i-gap��°���� �������� �����Ѵ�.
		// j ���� first �̻��̾�� �ϰ�
		// key ������ ���ĵ� �迭�� �ִ� ���� ũ�� j��°�� j+gap��°�� �̵�
		for (j = i - gap; j >= first && list[j] > key; j = j - gap) {
			list[j + gap] = list[j]; // ���ڵ带 gap��ŭ ���������� �̵�
		}
		list[j + gap] = key;
	}
}
void shell_sort(int list[], int n) {
	int i, gap;
	for (gap = n / 2; gap > 0; gap = gap / 2) {
		if ((gap % 2) == 0) {
			gap++; 
		}
			// �κ� ����Ʈ�� ������ gap�� ����.
			for (i = 0; i < gap; i++) {
				// �κ� ����Ʈ�� ���� ���� ���� ����
				inc_insertion_sort(list, i, n - 1, gap);
			}
	}
}
int compare(const int* a, const int* b) {
	if (*a > *b) 
		return 1;
	else
		return -1;
	//return(*a-*b); ������ ����� ��Ÿ���� �Ǳ� ������ �̷��� ǥ���ص� �ȴ�
}
int Binarysearch(int list[], int value,int left, int right) {
	while (left <= right) {
		int mid = (left + right) / 2;
		if (value > list[mid])
			left = mid + 1;
		else if (value < list[mid])
			right = mid - 1;
		else
			return 1;
	}
	return 0;
}
int main() {
	int i,N,M;
	scanf_s("%d", &N);
	int* arr = (int*)calloc(N,sizeof(int)); 
	
	for ( i = 0; i < N; i++)
		scanf_s("%d", &arr[i]);

	qsort(arr, N, sizeof(arr[0]), compare);
	
	scanf_s("%d", &M);
	int* arr1 = (int*)calloc(M, sizeof(int));
	for (i = 0; i < M; i++) {
		scanf_s("%d", &arr1[i]);
		printf("%d\n", Binarysearch(arr, arr1[i], 0, N - 1));
	}
	free(arr);
	return 0;
}