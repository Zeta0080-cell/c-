//����oj��203 ȷ���ַ����Ƿ�Ϊ��һ���ַ�����������
//ͨ������ַ����ֵ�Ƶ�ʾͿ���֪���Ƿ�Ϊ������
#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    int count[256] = {0}; // ����ֻ����ASCII�ַ�������һ����СΪ256��������ͳ���ַ�Ƶ��

    // ��ȡ�����ַ���
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    // ȥ�����з�
    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;

    // ��������ַ������Ȳ�ͬ��ֱ�ӷ���NO
    if (strlen(s1) != strlen(s2)) {
        printf("NO\n");
        return 0;
    }

    // ͳ��s1�е��ַ�Ƶ��
    for (int i = 0; i < strlen(s1); i++) {
        count[(unsigned char)s1[i]]++; // ��Ӧ�ַ�Ƶ�ʼ�1
    }

    // ��s2�е��ַ����м��
    for (int i = 0; i < strlen(s2); i++) {
        count[(unsigned char)s2[i]]--; // ������ڵ��ַ�Ƶ�ʼ�1
        if (count[(unsigned char)s2[i]] < 0) {
            // ���ĳ�ַ���Ƶ�ʱ�Ϊ������˵��s2�г�����s1û�е��ַ�
            printf("NO\n");
            return 0;
        }
    }

    // ���һ��������˵��s2��s1������
    printf("YES\n");
    return 0;
} 
