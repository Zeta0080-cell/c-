#include <stdio.h>

int age(int n) {
    if (n == 1) {
        return 10; // ��һ���˵�������10��
    } else {
        return age(n - 1) + 2; // �����˵�������ǰһ���˵������2
    }
}

int main() {
    int n = 5; // ����Ҫ���������˵�����
    printf("The age of the %dth person is %d.\n", n, age(n));
    return 0;
}
