#include<stdio.h>
int main()
{
    int T;//T�����������
    int l,r;//ʿ���ı߽�
    for(int i=1;i<=T;i++)
    {
        scanf("%d %d",&l,&r);
        for(int j=l;j<=r;j++)
        {
            if(j%3==0)
            {
                printf("YES\n");
            }
            else if(j==r)
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
