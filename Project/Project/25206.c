#include<stdio.h>
#include<string.h>	
int main(void) {
	
	double sum = 0.f, maxsum = 0.f;
	for (int i = 0; i < 20; i++)
	{
		double num;
		char arr[51], avernum[3];
		scanf_s("%s", arr, sizeof(arr));
		scanf_s("%lf", &num);
		scanf_s("%s", avernum, sizeof(avernum));
		maxsum += num;
		if (strcmp(avernum, "A+") == 0) sum += num * 4.5;
		else if (strcmp(avernum, "A0") == 0)  sum += num * 4.0;
		else if (strcmp(avernum, "B+") == 0) sum += num * 3.5;
		else if (strcmp(avernum, "B0") == 0) sum += num * 3.0;
		else if (strcmp(avernum, "C+") == 0)  sum += num * 2.5;
		else if (strcmp(avernum, "C0") == 0)  sum += num * 2.0;
		else if (strcmp(avernum, "D+") == 0)  sum += num * 1.5;
		else if (strcmp(avernum, "D0") == 0)  sum += num * 1.0;
		else if (strcmp(avernum, "F") == 0) sum += num * 0;
		else maxsum -= num;
	}
	printf("%.5lf", sum / maxsum);
}