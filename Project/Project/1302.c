#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
typedef struct {
	int count;
	char name[50];
}Sell;

int main(void) {
	Sell s[1000];
	int n, big = 0, count = 0, inserted = 0;
	char book[50];
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		inserted = 0;
		scanf("%s", &book);
		for (size_t j = 0; j < count; j++)
		{
			if (!strcmp(s[j].name, book)) {
				s[j].count++;
				inserted++;
			}
		}
		if (inserted == 0) {
			strcpy(s[count].name, book);
			s[count].count = 1;
			count++;
		}
	}
	while (count--) {
		if (s[count].count > big) {
			//printf("%s %d\n", s[count].name, s[count].count);
			big = s[count].count;
			n = count;
		}
		else 
			if (s[count].count == big) 
				if (strcmp(s[count].name, s[n].name) < 0)
					n = count;
	}
	printf("%s", s[n].name);
}