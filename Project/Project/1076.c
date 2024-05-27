#include<stdio.h>
#include<string.h>
struct data {
	char name[10];
	int price;
	long long mult;
};
int main(void) {
	struct data d[10] = {
		{"black",	0,	1 },
		{"brown",	1,	10},
		{"red",	2,	100},
		{"orange",	3,	1000},
		{"yellow",	4,	10000},
		{"green",	5,	100000},
		{"blue",	6,	1000000},
		{"violet",	7,	10000000},
		{"grey",	8,	100000000},
		{"white",	9,	1000000000}
	};
	char input[10];
	long long result;
	
	for (size_t j = 0; j < 3; j++)
	{
		scanf_s("%s", input, sizeof(input));
		for (size_t i = 0; i < 10; i++)
		{
			if (!strcmp(d[i].name, input)) {
				if (j == 0) {
					result = d[i].price;
				}
				else if (j == 1) {
					result = result*10+ d[i].price;
				}
				else {
					result *= d[i].mult;
				}
			}
		}
	}
	printf("%ld", result);
}