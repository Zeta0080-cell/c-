#include <stdio.h>

int main() {
    int a, b, c, temp;

    // ��ȡ�û��������������
    printf("�����������������ÿո�ָ�����");
    scanf("%d %d %d", &a, &b, &c);

    // ʹ�ü򵥵�ð�������߼�����������������
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // ��������Ľ��
    printf("�����Ľ���ǣ�%d %d %d\n", a, b, c);

    return 0;
}
