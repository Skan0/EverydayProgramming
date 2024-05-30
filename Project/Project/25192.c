#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int n;
	scanf_s("%d", &n);
	char** arr = malloc(sizeof(char*) * n);
	int count = 0;
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = malloc(sizeof(char) * 20);
		scanf("%s", arr[i]);

		if (!strcmp(arr[i], "ENTER")) 
			for (size_t j = 0; j < n; j++)
				strcpy(arr[j], "");

		else {
			int isvisit = 0;
			for (size_t j = 0; j < i; j++)
				if (!strcmp(arr[i], arr[j])) 
					isvisit++;

			if(!isvisit)
				count++;
		}
	}
	printf("%d", count);
}
//답은 나오나 시간초과로 tree구조로 만들어야 한다는데 아직 잘모르겠어서 c++로 map을 사용해서 만들었다.