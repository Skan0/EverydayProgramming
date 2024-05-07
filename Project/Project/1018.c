#include<stdio.h>
int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);

    // 1. �Էµ� ���带 �����Ѵ�.
    char board[N][M];
    for (int i = 0; i < N; i++) {
        scanf("%s", &board[i]);
    }

    // 2. �� ���� ����� ü������ �����Ѵ�.
    char chessboard_B[8][8];
    char chessboard_W[8][8];
    int tag = 1; // 1 �� -1�� �ݺ�
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (tag == 1) {
                chessboard_B[i][j] = 'B';
                chessboard_W[i][j] = 'W';
            }
            else {
                chessboard_B[i][j] = 'W';
                chessboard_W[i][j] = 'B';
            }
            tag *= -1; // 1 -> -1 or -1 -> 1
        }
        tag *= -1;
    }
    // 3. 8x8 ũ��� �ڸ���, ĥ�ؾ� �ϴ� ������ �ּڰ��� ���Ѵ�.
    int min = N * M;
    for (int i = 0; i < N - 7; i++) {
        for (int j = 0; j < M - 7; j++) {
            // (i, j)�� 8x8�� ���� ���� ���� ���
            // chessboard_B, chessboard_W �� �ٸ� ����
            int num_B = 0, num_W = 0;
            for (int k1 = 0; k1 < 8; k1++) {
                for (int k2 = 0; k2 < 8; k2++) {
                    if (chessboard_B[k1][k2] != board[i + k1][j + k2])
                        num_B++;
                    if (chessboard_W[k1][k2] != board[i + k1][j + k2])
                        num_W++;
                }
            }
            // min���� ������ min ������Ʈ
            if (num_B < min)
                min = num_B;
            if (num_W < min)
                min = num_W;
        }
    }
    printf("%d\n", min);
}