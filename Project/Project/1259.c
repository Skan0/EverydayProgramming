#include<stdio.h>
#include<string.h>

int main() {
	char n[100000] = { 0 };
	int size;
	int half;
	
	while (1) {
		gets_s(n, sizeof(n));
		if (strcmp(n,"0") == 0)break;
		/*scanf_s("%s", n,sizeof(n));
		if (strcmp(n, "0") == 0)break;*/
		//비교한값이 같으면 0 반환

		size = strlen(n);//입력한 문자열의 길이 

		if (size % 2 == 0) {//짝수일 때
			half = size / 2;
		}
		else {//홀수일 때
			half = size / 2 + 1;
		}
		int count = 0;
		for (int i = 0; i < half; i++)
		{
			if (n[i] == n[size-1-i]) {
				
				continue;
			}
			else {
				count++;
				break;
			}
		}
		if (count == 0) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}
	return 0;
}