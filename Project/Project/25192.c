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
//���� ������ �ð��ʰ��� tree������ ������ �Ѵٴµ� ���� �߸𸣰ھ c++�� map�� ����ؼ� �������.