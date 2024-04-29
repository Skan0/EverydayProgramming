#include<stdio.h>

int main(void) {
//max len 15
	char arr[5][16] = {0,};
	for (size_t i = 0; i < 5; i++)
	{
		scanf_s("%s", arr[i], (unsigned int)sizeof(arr[i]));
		//gets_s(arr[i], sizeof(arr[i]));
	}
	for (size_t i = 0; i < 16; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (arr[j][i])printf("%c", arr[j][i]);
		}
	}
}