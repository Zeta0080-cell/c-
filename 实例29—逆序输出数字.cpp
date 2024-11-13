#include <stdio.h>

// �������ڼ������ֵ�λ��
int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

// �������������ӡ����
void printReverse(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversed);
}

int main() {
    int number;

    // ����һ��������5λ��������
    printf("Enter a positive integer with at most 5 digits: ");
    scanf("%d", &number);

    // ���㲢��ӡλ��
    int digits = countDigits(number);
    printf("The number is a %d-digit number.\n", digits);

    // �����ӡ����
    printReverse(number);

    return 0;
}
