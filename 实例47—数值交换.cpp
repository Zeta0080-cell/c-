#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int temp;

    // ��ӡ����ǰ��ֵ
    printf("����ǰ��a = %d, b = %d\n", a, b);

    // ʹ����ʱ��������
    temp = a;
    a = b;
    b = temp;

    // ��ӡ�������ֵ
    printf("������a = %d, b = %d\n", a, b);

    return 0;
}
