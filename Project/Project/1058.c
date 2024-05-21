#include<stdio.h>

int main(void) {
	int n;
	//사람의 수 각 사람이 친구이면 y 아니면 n
	//각 사람의 친구를 구하면 된다
	//A가 B의 친구가 되기 위해서 두사람이 친구거나
	//A와 친구이고 B와 친구인 C가 존재해야한다.
	//가장 유명한 사람의 친구의수를 출력
	char arr[50][51];
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			scanf_s("%c", arr[i][j]);
		}
	}

}