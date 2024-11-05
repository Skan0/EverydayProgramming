#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t = 0;
    scanf_s("%d", &t);

    for (size_t j = 0; j < t; j++) {
        int n = 0, w = 0;
        scanf_s("%d %d", &n, &w);

        int* firRow = (int*)malloc(sizeof(int) * n);
        int* secRow = (int*)malloc(sizeof(int) * n);

        // ����� �Է°� ����
        for (size_t i = 0; i < n; i++) {
            scanf_s("%d", &firRow[i]);
        }
        for (size_t i = 0; i < n; i++) {
            scanf_s("%d", &secRow[i]);
        }

        int result = 0;

        // ù ��° �� �˻�
        for (size_t i = 0; i < n; i++) {
            if (firRow[i] <= w) {
                int temp = 0;
                int num = 3;

                // ����
                if (firRow[i] + firRow[(i + n - 1) % n] <= w) {
                    temp = firRow[i] + firRow[(i + n - 1) % n];
                    num = -1;
                }
                // �Ʒ���
                if (firRow[i] + secRow[i] <= w) {
                    int sum = firRow[i] + secRow[i];
                    if (temp < sum) {
                        temp = sum;
                        num = 0;
                    }
                }
                // ������
                if (firRow[i] + firRow[(i + 1) % n] <= w) {
                    int sum = firRow[i] + firRow[(i + 1) % n];
                    if (temp < sum) {
                        temp = sum;
                        num = 1;
                    }
                }

                // num ������ ���� ���� w�� ����� ���� �ٲ۴�.
                switch (num) {
                case -1:
                    firRow[i] = w + 1;
                    firRow[(i + n - 1) % n] = w + 1;
                    result += 1;
                    break;
                case 0:
                    firRow[i] = w + 1;
                    secRow[i] = w + 1;
                    result += 1;
                    break;
                case 1:
                    firRow[i] = w + 1;
                    firRow[(i + 1) % n] = w + 1;
                    result += 1;
                    break;
                default:
                    result += 1;
                    break;
                }
            }
        }

        // �� ��° �� �˻�
        for (size_t i = 0; i < n; i++) {
            if (secRow[i] <= w) {
                int temp = 0;
                int num = 3;

                // ����
                if (secRow[i] + secRow[(i + n - 1) % n] <= w) {
                    temp = secRow[i] + secRow[(i + n - 1) % n];
                    num = -1;
                }
                // ������
                if (secRow[i] + secRow[(i + 1) % n] <= w) {
                    int sum = secRow[i] + secRow[(i + 1) % n];
                    if (temp < sum) {
                        temp = sum;
                        num = 1;
                    }
                }

                // num ������ ���� ���� w�� ����� ���� �ٲ۴�.
                switch (num) {
                case -1:
                    secRow[i] = w + 1;
                    secRow[(i + n - 1) % n] = w + 1;
                    result += 1;
                    break;
                case 1:
                    secRow[i] = w + 1;
                    secRow[(i + 1) % n] = w + 1;
                    result += 1;
                    break;
                default:
                    result += 1;
                    break;
                }
            }
        }

        // ��� ���
        for (size_t i = 0; i < n; i++) {
            printf("%d ", firRow[i]);
        }
        printf("\n");
        for (size_t i = 0; i < n; i++) {
            printf("%d ", secRow[i]);
        }
        printf("\n");
        printf("%d\n", result);

        // �޸� ����
        free(firRow);
        free(secRow);
    }

    return 0;
}
