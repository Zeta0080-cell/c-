#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char input[11]; 				// ����һ���ַ����飬���ڴ洢������ַ���������������־'#'
    char hexStr[11]; 				// ����һ���ַ����飬���ڴ洢���˺��ʮ�������ַ���
    int index = 0; 					// ���ڼ�¼hexStr���������    								// ��ȡ������ַ���
    scanf("%10s", input); 			// ��ȡ���10���ַ�

   							 						// ����������ַ��������˷�ʮ�������ַ�
    for (int i = 0; input[i] != '#'; i++) 
	{
        if (isxdigit(input[i]))
		 { 									// ����ַ��Ƿ�Ϊʮ����������
            hexStr[index++] = input[i]; 	// ����ǣ���ӵ�hexStr������
        }
    }
    hexStr[index] = '\0'; 					// ���ַ���ĩβ��ӽ�����

    										// ������˺��ʮ�������ַ���
    printf("%s\n", hexStr);   										// ��ʮ�������ַ���ת��Ϊʮ�����������
    int decimal = 0;
    for (int i = 0; hexStr[i] != '\0'; i++) 
	{													// ��ʮ�������ַ�ת��Ϊ��Ӧ��ʮ����ֵ���ۼ�
        if (hexStr[i] >= '0' && hexStr[i] <= '9') 
		{
            decimal = decimal * 16 + (hexStr[i] - '0');
        } 
		else if (hexStr[i] >= 'A' && hexStr[i] <= 'F') 
		{
            decimal = decimal * 16 + (hexStr[i] - 'A' + 10);
        } 
		else if (hexStr[i] >= 'a' && hexStr[i] <= 'f') 
		{
            decimal = decimal * 16 + (hexStr[i] - 'a' + 10);
        }
    }
    printf("%d\n", decimal);

    return 0;
}
