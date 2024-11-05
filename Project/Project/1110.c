#include<stdio.h>

int main() {
	int num,  next, firnum, count = 0;
	scanf_s("%d", &num);

	firnum = num;
	do {
		int temp = 0;
		if (num < 10) {
			next = num;
			temp = num;
		}
		else {
			next = num%10;
			while (num > 0)
			{
				
				temp += num % 10;
				num /= 10;
			}
		}
		temp = temp % 10;
		num = temp + next * 10;
		count++;
	} while (num != firnum);
	printf("%d", count);
	return 0;
}