#include <stdio.h>

int main() {
    double number, square;

    // ��ʾ�û�����һ������
    printf("Enter a number: ");
    scanf("%lf", &number); // ʹ��%lf��ʽ˵������ȡdouble���͵�����

    // ����ƽ��
    square = number * number;

    // ������
    printf("The square of %lf is %lf\n", number, square);

    return 0;
}
