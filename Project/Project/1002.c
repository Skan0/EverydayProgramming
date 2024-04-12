#include<stdio.h>
#include<math.h>

int main() {
	int t, i;
	int x1, y1, r1, x2, y2, r2;
	int point = 0;
	scanf_s("%d", &t);
	for (i = 0; i < t; i++) {
		scanf_s("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		float R = pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5);
		int sum = r1 + r2, dif = abs(r1 - r2);
		//R 두점 사이의 거리
		if (R == 0 && r1 == r2)point = -1;
		else if (R == r1 + r2 || R == dif)point = 1;
		else if (dif < R && R < sum)point = 2;
		else point = 0;
		printf("%d\n", point);
	}
	return 0;
}