#include<stdio.h>
int main()
{
    int lower = 0;//��ͻ����¶�
    int upper = 0;//��߻����¶�
    double C = 0;//�����¶�
    scanf("%d %d", &lower, &upper);//������ͣ���߻����¶�
    if (lower <= upper)//�ж����뷶Χ�Ƿ�Ϸ������뷶Χ�Ϸ�
    {
        printf("fahr celsius\n");//���������ʽ��ӡ
        for (int F = lower; F <= upper; F += 2)//����ȡֵ��Χ�й���Ҫ������л����¶�
        {
            C = 5 * (F - 32) / 9.0;//ת���ɶ�Ӧ�������¶�
            printf("%d%6.1lf\n", F, C);//���������ʽ��ӡ���
        }
    }
    else//���뷶Χ���Ϸ�
    {
        printf("Invalid.");//��ӡ���
    }
    return 0;
}
