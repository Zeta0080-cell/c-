//�Ż��㷨���ֽ������� 
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("������һ��������: ");
    scanf("%d", &n);
    printf("%d=", n);

    int first = 1;  // �����Ƿ�����˺�
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            if (!first) {
                printf("*");
            }
            printf("%d", i);
            n /= i;
            first = 0;
        }
    }

    // ������ʣ�µ� n ��һ��������Ҳ��Ҫ�����
    if (n > 1) {
        if (!first) {
            printf("*");
        }
        printf("%d", n);
    }

    printf("\n");
    return 0;
}
