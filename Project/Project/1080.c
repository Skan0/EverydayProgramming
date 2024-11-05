#include<stdio.h>
int arr[50][50];
int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    //��� A �Է¹ޱ�
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            scanf("%1d", &arr[i][j]);
    }

    int num;
    //��� B �Է¹ޱ�
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &num);

            //�Է¹��� ���� ��� A�� �ٸ��ٸ� 1
            if (arr[i][j] != num) arr[i][j] = 1;
            //���ٸ� 0
            else arr[i][j] = 0;
        }
    }

    //��ü ũ�Ⱑ 3*3�� ���� �ʴ� ���
    if (N < 3 || M < 3) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (arr[i][j]) {
                    printf("-1\n");
                    return 0;
                }
            }
        }
        printf("0\n");
    }
    //��ü ũ�Ⱑ 3*3���� ū ���
    else {
        int cnt = 0;

        //��ü ���� �˻�
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                //�ٸ��κ��� ��,
                if (arr[i][j]) {
                    //3*3 ��������� ������
                    if (i < N - 2 && j < M - 2) {
                        //3*3ũ��
                        for (int x = i; x < i + 3; x++) {
                            for (int y = j; y < j + 3; y++) {
                                arr[x][y] = !arr[x][y];
                            }
                        }
                        //Ƚ�� count
                        cnt++;
                    }
                    //���� ���̶�� ���̻� ������ �� ����
                    else {
                        if (arr[i][j]) {
                            printf("-1\n");
                            return 0;
                        }
                    }
                }
            }
        }
        //��� ���
        printf("%d\n", cnt);
    }


    return 0;
}
