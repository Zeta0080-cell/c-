#include <stdio.h>
int main() 
{
    int n;

    // ��ȡ����Ĵ�С
    printf("����������Ԫ�صĸ�����");
    scanf("%d", &n);

    int a[n];  // �����������洢Ԫ��

    // ��������Ԫ��
    printf("�����������Ԫ�أ�\n");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }

    // �����һ��Ԫ�������ֵ�����һ��Ԫ������Сֵ
    int max_idx = 0, min_idx = 0;

    // �������ֵ����Сֵ������
    for (int i = 1; i < n; i++) 
	{
        if (a[i] > a[max_idx]) 
		{
            max_idx = i;
        }
        if (a[i] < a[min_idx]) 
		{
            min_idx = i;
        }
    }

    // �������ֵ�͵�һ��Ԫ��
    if (max_idx != 0) 
	{
        int temp = a[max_idx];
        a[max_idx] = a[0];
        a[0] = temp;
    }

    // ������Сֵ�����һ��Ԫ��
    if (min_idx != n - 1) 
	{
        int temp = a[min_idx];
        a[min_idx] = a[n - 1];
        a[n - 1] = temp;
    }

    // ����޸ĺ������
    printf("�޸ĺ�����飺\n");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
