#include <stdio.h>

int N, R, C;
long long ans = 0;  // ans�� Z-���� ���� ��ġ ���� ����

void solve(int n, int c, int r) {
    if (n == 0) return;  // �迭 ũ�Ⱑ 1x1�� �� �� �̻� ���� �ʿ� ����

    int size = 1 << n;   // ���� �迭�� �� ���� ũ��: 2^n
    int half = size / 2; // �迭�� 4����� ���� ���� ũ��

    // ��� ��и鿡 ���ϴ��� �Ǵ��Ͽ� Z-���� ���� ���ϰ�, ��ǥ�� ��и� ���� ���
    if (r < half && c < half) {
        ans += half * half * 0;  // ���� �� ��и�
        solve(n - 1, c, r);      // ���� �ܰ�� �Ѿ
    }
    else if (r < half && c >= half) {
        ans += half * half * 1;  // ������ �� ��и�
        solve(n - 1, c - half, r);
    }
    else if (r >= half && c < half) {
        ans += half * half * 2;  // ���� �Ʒ� ��и�
        solve(n - 1, c, r - half);
    }
    else {
        ans += half * half * 3;  // ������ �Ʒ� ��и�
        solve(n - 1, c - half, r - half);
    }
}

int main() {
   
    scanf("%d %d %d", &N, &R, &C);

    // Z-���� �˰��� ����
    solve(N, C, R);

    // ��� ���
    printf("%lld", ans);

    return 0;
}
