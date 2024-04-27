#include<stdio.h>

int main(void) {
	int num;
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		for (int j = num-i-1; j>0; j--)
		{
			printf(" ");
		}
		for (int l = -1; l < i*2; l++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = num-1; i > 0; i--) {
		for (int j = 0; j < num-i; j++) {
			printf(" ");
		}
		for (int l =1; l < i*2; l++)
		{
			printf("*");
		}
		printf("\n");
	}
}