#include<stdio.h>

int main(void) {
	int  n,f;
	scanf_s("%d%d", &n, &f);
	n = n - (n % 100);
	//printf("%d\n", n);
	if (n % f == 0) {
		printf("%02d", n % 100);
	}
	else {
		int temp = n % f;
		//printf("temp %d", temp);
		n += f - temp;
		printf("%02d", n % 100);
	}
}