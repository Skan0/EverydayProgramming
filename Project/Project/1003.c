#include<stdio.h>
#include<stdlib.h>
/// <summary>
/// 동적계획법(Dynamic Programming)
/// 피보나치 수열과 같이 다른 값을 구할 때 이미 구한 값을 다시 사용할 때가 있는데
/// 이미 구한 값을 매번 다시 구하지 않고 저장해뒀다가 다시 사용하는것
/// 탑다운 방식과 바텀업 방식이 있는데 대부분 바텀업 방식이 효율적이다.
/// </summary>

int arr[41];//fibonacci 함수의 값이 반복되어서 계산되지 않게 저장하고
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