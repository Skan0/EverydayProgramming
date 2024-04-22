#include<stdio.h>

int main(void) {
	char chess[8] = {'0'};
	int count = 0;
	
	for (int i = 0; i < 8; i++) {
		gets(chess);
		for (int j = 0; j < 8; j++)
		{
			if (chess[j] == 'F' && i % 2 == 0 && j % 2 == 0) {
				count++;
			}
			else if (chess[j] == 'F' && i % 2 == 1 && j % 2 == 1) {
				count++;
			}
		}
	}
	printf("%d", count);
}