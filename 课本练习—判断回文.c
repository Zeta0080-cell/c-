#include <stdio.h>
#include <string.h>

int main() {
    char str[51];  // ���ڴ洢����ľ��ӣ���󳤶�Ϊ50��Ԥ��һ���ַ��洢'\0'
	int i; 
    // ��ȡ����
    fgets(str, sizeof(str), stdin);
    
    // ȥ�����ܵĻ��з�
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int isPalindrome = 1;  // Ĭ���ǻ��ģ������ֲ����ϻ����������޸�Ϊ0

    // �жϻ���
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;  // ��������ַ���ͬ�����Ϊ�ǻ���
            break;
        }
    }

    // ������
    if (isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
