#define Max 9876543210
#include<stdio.h>

int main(void) {
	long long x, y;
	scanf_s("%lld %lld", &x, &y);
	long long z = y*100 / x;
	long long zz = z;
	long long count = Max;
	//printf("%lld %lld\n", x, y);
	long long low = 0 , high = 2000000000, mid;
	while (low <= high) {
		mid = low + (high - low) / 2;
		zz = (y + mid) * 100 / (x + mid);
		if (zz != z) {
			high = mid - 1;
			count = mid;
		}
		else low = mid + 1;
	}
	if (count == Max)printf("-1");
	else printf("%lld", count);
}
/*

	if (z >= 99) {
		printf("-1");
	}
	else {//n번의 경기를 추가로 해서 승률이 바뀐 경우의 식
		
	}
if ((int)((z + 1) * x - y * 100) % (99 - z) == 0) {
			printf("%d", (int)((z + 1) * x - y * 100) / (99 - z));
		}
		else {
			printf("%d", (int)((z + 1) * x - y * 100) / (100 - z));
		}
while (z == zz) {
	count++;
	zz = (y + count) * 100 / (x + count);
	//printf("%lld %lld\n", z, zz);
}
printf("%d", count);
*/