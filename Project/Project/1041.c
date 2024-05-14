//#include<stdio.h>
//#include<stdlib.h>
//int compare(const void* a,const void* b) {
//	return (*(long long*)a - *(long long*)b);
//}
//int main(void) {
//	long long int N;
//	scanf_s("%d", &N);
//	
//	//가장 작은수 * (N * N개 + N-1 * N-1 * 4) 
//	//+ 두번째로 작은수 * N-1 * 4 
//	//+ 세번째로 작은수 * 4
//	long long int arr[6];
//	long long int result=0;
//	for (size_t i = 0; i < 6; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	//ABC, ADE, ABD, AEC, FBD, FDE, FEC, FCB
//	int sum[8];
//	sum[0] = arr[0] + arr[1] + arr[2];//ABC
//	sum[1] = arr[0] + arr[1] + arr[3];//ABD
//	sum[2] = arr[0] + arr[2] + arr[4];//ACE
//	sum[3] = arr[0] + arr[3] + arr[4];//ADE
//	sum[4] = arr[5] + arr[3] + arr[4];//FDE
//	sum[5] = arr[5] + arr[3] + arr[1];//FBD
//	sum[6] = arr[5] + arr[2] + arr[4];//FCE
//	sum[7] = arr[5] + arr[2] + arr[1];//FCB
//	int small = sum[0];
//	int temp=0;
//	long long int final[3];
//	for (size_t i = 1; i < 6; i++)
//	{
//		if (small > sum[i]) {
//			small = sum[i];
//			temp = i;
//		}
//	}
//	switch(temp) {
//	case 0:
//		final[0] = arr[0];
//		final[1] = arr[1];
//		final[2] = arr[2];
//		break;
//	case 1:
//		final[0] = arr[0];
//		final[1] = arr[1];
//		final[2] = arr[3];
//		break;
//	case 2:
//		final[0] = arr[0];
//		final[1] = arr[2];
//		final[2] = arr[4];
//		break;
//	case 3:
//		final[0] = arr[0];
//		final[1] = arr[3];
//		final[2] = arr[4];
//		break;
//	case 4:
//		final[0] = arr[5];
//		final[1] = arr[3];
//		final[2] = arr[4];
//		break;
//	case 5:
//		final[0] = arr[5];
//		final[1] = arr[3];
//		final[2] = arr[1];
//		break;
//	case 6:
//		final[0] = arr[5];
//		final[1] = arr[2];
//		final[2] = arr[4];
//		break;
//	case 7:
//		final[0] = arr[5];
//		final[1] = arr[1];
//		final[2] = arr[2];
//		break;
//	}
//	qsort(final, 3, sizeof(long long), compare);
//	if (N == 1) {//N이 1일 때 
//		qsort(arr, 6, sizeof(arr), compare);
//		for (size_t i = 0; i < 5; i++)
//		{
//			result += arr[i];
//		}
//	}
//	else {
//		
//		result = final[0] * (long long int)(N * N + (N - 1) * (N - 1) * 4)
//			+ final[1] * (long long int)((N - 1) * 4*2)
//			+ final[2] * 4;
//	}
//	
//	printf("%lld", result);
//}
#include <stdio.h>
#pragma warning(disable : 4996)

int com1(int a, int b, int c, int d, int e, int f) {
	int arr1[6];
	arr1[0] = a;
	arr1[1] = b;
	arr1[2] = c;
	arr1[3] = d;
	arr1[4] = e;
	arr1[5] = f;
	int min = arr1[0];
	for (int i = 1; i < 6; i++) {
		if (min > arr1[i]) {
			min = arr1[i];
		}
	}
	return min;
}

int com2(int a, int b, int c, int d, int e, int f) {
	int arr2[12];
	arr2[0] = a + b;
	arr2[1] = a + c;
	arr2[2] = a + d;
	arr2[3] = a + e;
	arr2[4] = f + b;
	arr2[5] = f + c;
	arr2[6] = f + d;
	arr2[7] = f + e;
	arr2[8] = d + e;
	arr2[9] = d + b;
	arr2[10] = c + e;
	arr2[11] = c + b;
	int min = arr2[0];
	for (int i = 1; i < 12; i++) {
		if (min > arr2[i]) {
			min = arr2[i];
		}
	}
	return min;
}

int com3(int a, int b, int c, int d, int e, int f) {
	int arr3[8];
	arr3[0] = a + d + e;
	arr3[1] = a + d + b;
	arr3[2] = a + c + e;
	arr3[3] = a + c + b;
	arr3[4] = f + d + e;
	arr3[5] = f + d + b;
	arr3[6] = f + c + e;
	arr3[7] = f + c + b;
	int min = arr3[0];
	for (int i = 1; i < 8; i++) {
		if (min > arr3[i]) {
			min = arr3[i];
		}
	}
	return min;
}

int com4(int a, int b, int c, int d, int e, int f) {
	int arr1[6];
	arr1[0] = a;
	arr1[1] = b;
	arr1[2] = c;
	arr1[3] = d;
	arr1[4] = e;
	arr1[5] = f;
	int max = 0;
	for (int i = 1; i < 6; i++) {
		if (arr1[max] < arr1[i]) {
			max = i;
		}
	}
	int sum = 0;
	for (int i = 0; i < 6; i++) {
		if (i != max) {
			sum = sum + arr1[i];
		}
	}
	return sum;
}

int main() {
	int N;
	scanf("%d", &N);
	int a, b, c, d, e, f;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	if (N == 1) {
		printf("%d", com4(a, b, c, d, e, f));
		return 0;
	}
	long long int case1 = 4;
	long long int case2 = 8 * N - 12;
	long long int case3 = (5 * (long long int)N * N) - (16 * N) + 12;
	long long int result = 0;
	result = result + com3(a, b, c, d, e, f) * case1;
	result = result + com2(a, b, c, d, e, f) * case2;
	result = result + com1(a, b, c, d, e, f) * case3;
	printf("%lld", result);
	return 0;
}