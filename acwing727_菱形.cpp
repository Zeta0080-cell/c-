//�ҵ�˼·����������ηֽ��һ���������κ�һ����������
//Ȼ���ٷֱ�����������sum1��sum2���ֱ������������εĸ߶ȡ� 
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,sum1,sum2,i,j,k,r,z;
	scanf("%d",&n);
	sum1=n/2+1;
	sum2=n/2; 
	for(i=1;i<=sum1;i++)
	{
		for(j=1;j<=sum1-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(r=sum2;r>=1;r--)
	{
		for(z=0;z<=sum2-r;z++)
		{
			printf(" ");
		}
		for(z=2*r-1;z>=1;z--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;	
}
