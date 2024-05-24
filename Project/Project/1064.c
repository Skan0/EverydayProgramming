#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}
double dis(double ax, double ay, double bx, double by, double cx, double cy) {
	double arr[3];
	
	arr[0] = sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay));//b�� a������ �Ÿ�
	arr[1] = sqrt((cx - ax) * (cx - ax) + (cy - ay) * (cy - ay));//c a
	arr[2] = sqrt((bx - cx) * (bx - cx) + (by - cy) * (by - cy));//b c
	double small = arr[0]; double big = arr[0];
	for (size_t i = 0; i < 3; i++)
	{
		if (small > arr[i])
			small = arr[i];
		if (big < arr[i])
			big = arr[i];
	}
	printf("%lf %lf\n", small, big);
	return ((big-small) * 2);
}

int main(void) {
	//����纯���� ����ǵ� 3���� ��ǥ�� �־�����
	//���� �Ѱ��� ��ǥ�� ���ؼ� ����纯���� �����
	//�������� ����纯���� ���� �� ������ ���� ū ����纯������ ����Ѵ�.
	double ax,ay,bx,by,cx,cy;
	scanf_s("%lf%lf%lf%lf%lf%lf", &ax,& ay,& bx, &by, &cx, &cy);
	if ((ay - by) * (ax - cx) == (ay - cy) * (ax - bx)) {
		printf("-1.0");
	}
	else {
		printf("%.15lf",dis(ax, ay, bx, by, cx, cy));
	}
}