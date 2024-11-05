#include <stdio.h>

int N, R, C;
long long ans = 0;  // ans는 Z-순서 상의 위치 값을 저장

void solve(int n, int c, int r) {
    if (n == 0) return;  // 배열 크기가 1x1일 때 더 이상 나눌 필요 없음

    int size = 1 << n;   // 현재 배열의 한 변의 크기: 2^n
    int half = size / 2; // 배열을 4등분할 때의 절반 크기

    // 어느 사분면에 속하는지 판단하여 Z-순서 값을 더하고, 좌표를 사분면 내로 축소
    if (r < half && c < half) {
        ans += half * half * 0;  // 왼쪽 위 사분면
        solve(n - 1, c, r);      // 다음 단계로 넘어감
    }
    else if (r < half && c >= half) {
        ans += half * half * 1;  // 오른쪽 위 사분면
        solve(n - 1, c - half, r);
    }
    else if (r >= half && c < half) {
        ans += half * half * 2;  // 왼쪽 아래 사분면
        solve(n - 1, c, r - half);
    }
    else {
        ans += half * half * 3;  // 오른쪽 아래 사분면
        solve(n - 1, c - half, r - half);
    }
}

int main() {
   
    scanf("%d %d %d", &N, &R, &C);

    // Z-순서 알고리즘 실행
    solve(N, C, R);

    // 결과 출력
    printf("%lld", ans);

    return 0;
}
