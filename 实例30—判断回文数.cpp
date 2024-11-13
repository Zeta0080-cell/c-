//�жϻ�����
 #include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    while (num > 0) {
        int digit = num % 10; // ��ȡ��ǰ���λ������
        reversedNum = reversedNum * 10 + digit; // ��������ӵ���������ĩβ
        num = num / 10; // �Ƴ���ǰ���λ������
    }
    return originalNum == reversedNum; // �Ƚ�ԭʼ�����������Ƿ����
}

int main() {
    int number;
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    return 0;
}
