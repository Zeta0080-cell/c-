#include <stdio.h>

int main() {
    int a, b;

    // ��ȡ�û��������������
    printf("�����������������ÿո�ָ�����");
    scanf("%d %d", &a, &b);

    // ʹ�ù�ϵ��������бȽ�
    if (a > b) {
        printf("%d ���� %d\n", a, b);
    } else if (a < b) {
        printf("%d С�� %d\n", a, b);
    } else {
        printf("%d ���� %d\n", a, b);
    }

    return 0;
}
