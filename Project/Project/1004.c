#include<stdio.h>
#include<math.h>
int main() {
	int T, x1, y1, x2, y2, n, Cx, Cy, r;
	int count = 0;
	scanf_s("%d", &T);
	for (int i = 0; i < T; i++)
	{
		count = 0;
		scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf_s("%d", &n);
		//도착점이 행성의 경계선에 걸쳐 있을 경우 카운트 하지 않는다
		//출발점에서 도착점까지 가는데 피해갈 수 도 있어
		//출발점이나 도착점이 행성안에 있어서 경계를 지나야 하는가
		for (int j = 0; j < n; j++) {
			
			scanf_s("%d %d %d", &Cx, &Cy, &r);
			//행성의 경계에 있으면 카운트 안 하니까
			//printf("%f : %f + %f\n", pow(r, 2), pow(x2 - Cx,2), pow(y2 - Cy,2));
			if ( pow(r, 2) > pow(x2-Cx, 2) + pow(y2-Cy, 2)&& pow(r, 2) < pow(x1 - Cx, 2) + pow(y1 - Cy, 2) ) {
				//도착지점이 행성경계 안에 있고 출발지점이 이 행성 밖에 있는가 검사한다.
				//printf("%f : %f + %f\n", pow(r, 2), pow(x2 - Cx,2), pow(y2 - Cy,2));
				count++;
			}
			else if (pow(r, 2) < pow(x2 - Cx, 2) + pow(y2 - Cy, 2) && pow(r, 2) > pow(x1 - Cx, 2) + pow(y1 - Cy, 2)) {				
				//도착지점이 행성경계 밖에 있고 출발지점이 이 행성 안에 있는가 검사한다.
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}