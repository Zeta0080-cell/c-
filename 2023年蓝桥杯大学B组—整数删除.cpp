#include <stdio.h>
int main() 
{
    int n, k, min, index = 0;
    int a[100];    
    scanf("%d %d", &n, &k); // ��ȡ n �� k ��ֵ
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]); // ��������Ԫ��
    }

    for (int j = 1; j <= k; j++)
	{ // Ҫ���� k �β���
        min = a[0];
        index = 0;
        
        // �ҵ���Сֵ����������
        for (int i = 1; i < n; i++) 
		{
            if (a[i] < min) 
			{
                min = a[i];
                index = i;
            }
        }

        // ����Ԫ�ؼ�����Сֵ
        if (index - 1 >= 0) 
		{
            a[index - 1] += min;
        }
        if (index + 1 < n) 
		{
            a[index + 1] += min;
        }

        // ɾ����Сֵλ���ϵ�Ԫ��
        for (int i = index; i < n - 1; i++) 
		{
            a[i] = a[i + 1]; // �������Ԫ������
        }   
        n--; // ���鳤�ȼ�1
    }
    // �������������
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", a[i]);
    }

    return 0;
}

