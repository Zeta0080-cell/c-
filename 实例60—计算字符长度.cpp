#include <stdio.h>
#include <string.h> // ���� strlen() ������ͷ�ļ�

int main() {
    char str[] = "Hello, World!";
    size_t length = strlen(str); // ʹ�� strlen() ���������ַ�������
    printf("�ַ�������Ϊ: %zu\n", length);
    return 0;
}
