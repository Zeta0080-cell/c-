#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int x;  // ��Ҫ�������
    int i, j;  // ���ڷֽ����ӵ�������
    int m, n;  // ������ȫƽ������ƽ����

    // ���� i��ȷ�� i �� j �� 168 ����������
    for (i = 1; i <= 168 / 2; i++) {
        if (168 % i == 0) {  // ��� i �Ƿ��� 168 ������
            j = 168 / i;  // �����Ӧ����һ������

            // ��� i �� j �Ƿ���������
            if ((i + j) % 2 == 0 && (j - i) % 2 == 0) {
                m = (i + j) / 2;  // ���� m
                n = (j - i) / 2;  // ���� n

                // ���� x ��ֵ
                x = n * n - 100;

                // ������
                printf("�������������� x �ǣ�%d\n", x);
            }
        }
    }

    return 0;
}
