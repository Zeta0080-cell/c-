//2023�����ű�ʡ���о����顪�׳˵ĺ�
#include<stdio.h>
int fact(int m)//����һ���׳˺���
{
	int i,result=1;
	for(i=1;i<=m;i++)
	{
		result=result*i;
	}	
	return result;
} 
int main()
{
	int n,i,j,sum=0;//�����û���������ĸ���
	int a[1000];//���û����������������
	int m,flag,item;//m��ΪҪ��Ľ׳� 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);	
		flag=fact(a[i]);
		sum+=flag;//�õ��׳˵ĺ� 
	} 
	for(j=sum;j>=1;j--)
	{
		item=fact(j);
		if(sum%item==0)
		{
			printf("%d",j);
			break;
		}
	}
	return 0;	
} 
