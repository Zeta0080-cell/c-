#include <stdio.h>

int main() {
    // �趨쳲��������е������
    int n = 20;
    long long fib[n + 1];  // �洢쳲���������

    // ��ʼ��쳲���������
    fib[0] = 0;
    fib[1] = 1;

    // ����쳲���������
    for (int i = 2; i <= n + 1; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // ����������еĺ�
    double sum = 0.0;
    for (int i = 2; i <= n + 1; i++) {
        sum += (double)fib[i] / fib[i - 1];
    }

    // ������
    printf("ǰ20��������еĺ���: %.4f\n", sum);

    return 0;
}
