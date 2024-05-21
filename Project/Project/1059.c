#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}

int main(void) {
	int l;
	scanf_s("%d", &l);
	int arr[50] = {0};
	for(int i =0;i<l;i++) {
		scanf_s("%d", &arr[i]);
	}
	int n;
	scanf_s("%d", &n);
	qsort(arr, l, sizeof(int),compare);
	int small=0,big=0;
	for (size_t i = 0; i < l; i++)
	{
		if (arr[i] < n&&n < arr[i + 1]) {
			small = n-arr[i];
			big = arr[i + 1]-n;
			break;
		}
	}
	int result = small * big;
	printf("%d", result==0?result:result-1);
}