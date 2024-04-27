#include<stdio.h>

int main(void) {
	int arr[6] = { 1,1,2,2,2,8 };
	int input[6] = { 0 };
	scanf_s("%d %d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4], &input[5]);
	for (int i = 0; i < 6; i++) {
		if (i == 5)
			printf("%d", arr[i] - input[i]);
		else
			printf("%d ", arr[i] - input[i]);

	}
}