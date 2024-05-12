#include<stdio.h>

int main() {
	int N;
	scanf_s("%d", &N);//약수의 개수
	
	int temp, small=1000000, big=2;
	while (N--) {
		scanf_s("%d", &temp);
		if (temp >= big) {
			big = temp;
		}
		if (temp <= small) {
			small = temp;
		}
	}
	printf("%d", small * big);

	return 0;
}