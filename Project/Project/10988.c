#include<stdio.h>
#include<stdlib.h>
int main(void) {
	char string[100] = { 0 };
	int a = scanf_s("%s", string, sizeof(string));
	//printf("%s", string);
	int len = strlen(string);
	int half;
	if (len % 2 == 0) {
		half = len/2;
	}
	else {
		half= len/2+1;
	}
	for (int i = 0; i < half; i++)
	{
		//printf("%c: %d %c: %d\n",string[i], i,string[len-i-1], len - i - 1);
		if (string[i]==string[len-i-1]) {
			if (i == half-1) {
				printf("1");
			}
		}
		else {
			printf("0");
			break;
		}
	}
}