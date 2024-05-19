#include<stdio.h>
#include<string.h>
char normal[101][101];
int visit[101][101];
int n;
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0,0,-1,1 };
void dfs(int x, int y) {
	if (visit[x][y]) return;
	visit[x][y] = 1;
	for (size_t i = 0; i < 4; i++)
	{
		int xx = dx[i]+x;
		int yy = dy[i]+y;
		if(normal[x][y]==normal[xx][yy]&&1!=visit[xx][yy]){
			dfs(xx, yy);
		}
	}
}


int main(void) {
	scanf_s("%d", &n);
	int count=0;
	for (size_t i = 0; i < n; i++)
	{
		scanf_s("%s", normal[i],sizeof(normal));
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (1!=visit[i][j]) {
				dfs(i, j);
				count++;
			}
		}
	}
	printf("%d ", count);
	count = 0;
	memset(visit, 0, sizeof(visit));

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (normal[i][j] == 'G')normal[i][j] = 'R';
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (1 != visit[i][j]) {
				dfs(i, j);
				count++;
			}
		}
	}
	printf("%d", count);
}