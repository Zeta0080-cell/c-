#include <stdio.h>
#include <string.h>

int main() {
    char day[10];

    // ��ʾ�û��������ڼ��ĵ�һ����ĸ
    printf("���������ڼ��ĵ�һ����ĸ��");
    scanf("%s", day);

    // �ж����ڼ�
    if (day[0] == 'M' || day[0] == 'm') {
        // �����һ����ĸ��'M'�����жϵڶ�����ĸ
        if (day[1] == 'o' || day[1] == 'O') {
            printf("����һ\n");
        } else {
            printf("������\n");
        }
    } else if (day[0] == 'T' || day[0] == 't') {
        // �����һ����ĸ��'T'�����жϵڶ�����ĸ
        if (day[1] == 'u' || day[1] == 'U') {
            printf("���ڶ�\n");
        } else {
            printf("������\n");
        }
    } else if (day[0] == 'W' || day[0] == 'w') {
        printf("������\n");
    } else if (day[0] == 'F' || day[0] == 'f') {
        printf("������\n");
    } else if (day[0] == 'S' || day[0] == 's') {
        // �����һ����ĸ��'S'�����жϵڶ�����ĸ
        if (day[1] == 'a' || day[1] == 'A') {
            printf("������\n");
        } else {
            printf("������\n");
        }
    } else {
        printf("������Ч��������һ����Ч�����ڼ��ĵ�һ����ĸ��\n");
    }

    return 0;
}
