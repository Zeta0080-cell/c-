#include <stdio.h>

#define MAX 100

int main() {
    int n, i, j, num;
    int arr[MAX][MAX] = {0}; // ����������ǵ��������Ϊ100

    printf("������������ǵ�������");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        arr[i][0] = 1; // ÿ�еĵ�һ������1
        arr[i][i] = 1; // ÿ�е����һ������1
        for (j = 1; j < i; j++) {
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j]; // ÿ�����������Ϸ�����֮��
        }
    }

    // ��ӡ�������
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

