//��׳˵ĺ�
 #include <stdio.h>

// ����׳˵ĺ���
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    long long sum = 0;

    // �ۼӴ�1��20�Ľ׳�
    for (int i = 1; i <= 20; i++) {
        sum += factorial(i);  // ���ϵ�ǰ�׳�
    }

    // ������
    printf("1 + 2! + 3! + ... + 20! �ĺ���: %lld\n", sum);

    return 0;
}
