#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int N;
	scanf_s("%d", &N);
	char arr[100] = { 0 };
	int count = 0;
	
	for (int i = 0; i < N; i++) {
		scanf_s("%s", arr,sizeof(arr));
		int iscount = 0;
		int alpha[26] = { 0 };
		for (int j = 0; j < strlen(arr); j++)
		{
			if (arr[j] != arr[j + 1]) {
				if (alpha[arr[j] - 'a'] == 0) {
					alpha[arr[j] - 'a']++;
				}
				else {
					iscount++;
					break;
				}
			}//������ ���� ���Ĺ��̾����� üũ ������ �־����� iscount++;
		}
		if (iscount == 0) {
			count++;
		}
	}
	printf("%d", count);
}