//�α���ϰ2��17 ����3�ĳ˷��� 
#include<stdio.h>
#include<math.h>
int main()
{
    int n = 0;//�Ǹ�����n
    scanf("%d", &n);//���շǸ�����n
    for (int i = 0; i <= n; i++)//���3��0~n�η���ֵ
    {
        printf("pow(3,%d) = %.lf\n", i, pow(3, i));//��ʽ���ʴ�ӡ���
    }
    return 0;
}
