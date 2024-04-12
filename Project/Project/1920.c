#include<stdio.h>
#include<stdlib.h>
void inc_insertion_sort(int list[], int first, int last, int gap) {
	int i, j, key;

	for (i = first + gap; i <= last; i = i + gap) {
		key = list[i]; // 현재 삽입될 숫자인 i번째 정수를 key 변수로 복사

		// 현재 정렬된 배열은 i-gap까지이므로 i-gap번째부터 역순으로 조사한다.
		// j 값은 first 이상이어야 하고
		// key 값보다 정렬된 배열에 있는 값이 크면 j번째를 j+gap번째로 이동
		for (j = i - gap; j >= first && list[j] > key; j = j - gap) {
			list[j + gap] = list[j]; // 레코드를 gap만큼 오른쪽으로 이동
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
			// 부분 리스트의 개수는 gap과 같다.
			for (i = 0; i < gap; i++) {
				// 부분 리스트에 대한 삽입 정렬 수행
				inc_insertion_sort(list, i, n - 1, gap);
			}
	}
}
int compare(const int* a, const int* b) {
	if (*a > *b) 
		return 1;
	else
		return -1;
	//return(*a-*b); 음수와 양수만 나타내면 되기 때문에 이렇게 표현해도 된다
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