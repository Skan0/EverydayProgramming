#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	long b;
	int t, a;
	int temp;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %ld", &a, &b);
		// 1: 전부 1이고
		// 2: 2, 4, 8, 6 반복
		// 3: 3, 9, 7, 1 반복
		// 4: 4, 6 반복
		// 5: 5
		// 6: 6
		// 7: 7, 9, 3, 1
		// 8: 8, 4, 2, 6
		// 9: 9, 1
		// 0: 0
		switch (a % 10) {
		case 0:
			a = 10;
			break;
		case 1:
			a = 1;
			break;
		case 2:
			b = b % 4;
			if (b == 1) a = 2;
			else if (b == 2)a = 4;
			else if (b == 3)a = 8;
			else if (b == 0)a = 6;
			break;
		case 3:
			b = b % 4;
			if (b == 1) a = 3;
			else if (b == 2)a = 9;
			else if (b == 3)a = 7;
			else if (b == 0)a = 1;
			break;
		case 4:
			b = b % 2;
			if (b == 1) a = 4;
			else if (b ==0)a = 6;
			break;
		case 5:
			a = 5;
			break;
		case 6:
			a = 6;
			break;
		case 7:
			b = b % 4;
			if (b == 1) a = 7;
			else if (b == 2)a = 9;
			else if (b == 3)a = 3;
			else if (b == 0)a = 1;
			break;
		case 8:
			b = b % 4;
			if (b == 1) a = 8;
			else if (b == 2)a = 4;
			else if (b == 3)a = 2;
			else if (b == 0)a = 6;
			break;
		case 9:
			b = b % 2;
			if (b == 1) a = 9;
			else if (b == 0)a = 1;
			break;
		}
		printf("%d\n", a);
	}

}