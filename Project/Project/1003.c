#include<stdio.h>
#include<stdlib.h>
/// <summary>
/// ������ȹ��(Dynamic Programming)
/// �Ǻ���ġ ������ ���� �ٸ� ���� ���� �� �̹� ���� ���� �ٽ� ����� ���� �ִµ�
/// �̹� ���� ���� �Ź� �ٽ� ������ �ʰ� �����ص״ٰ� �ٽ� ����ϴ°�
/// ž�ٿ� ��İ� ���Ҿ� ����� �ִµ� ��κ� ���Ҿ� ����� ȿ�����̴�.
/// </summary>

int arr[41];//fibonacci �Լ��� ���� �ݺ��Ǿ ������ �ʰ� �����ϰ�
int fibonacci(int n) {
    if (n == 0) {
        arr[0] = 0;
        return 0;
    }
    else if (n == 1) {
        arr[1] = 1;
        return 1;
    }
    if (arr[n] != 0) {
        return arr[n];
    }
    else {
        return arr[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main(void) {
    int T;
    scanf_s("%d", &T);
    
    for (size_t i = 0; i < T; i++)
    {
        int temp;
        scanf_s("%d", &temp);

        if (temp == 1) {
            printf("0 1\n");
        }
        else if (temp == 0) {
            printf("1 0\n");
        }
        else {
            fibonacci(temp);
            printf("%d %d", arr[temp-1], arr[temp]);
        }
    }
}