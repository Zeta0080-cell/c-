#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,k,n,flag;
	printf("����������Ҫ�ĵ����ǵ�����");
	scanf("%d",&n); 
	for(i=n;i>=1;i--)
	{
		for(j=0;j<=n-i;j++)
		{
			printf(" ");//��ӡÿ��ͼ��ǰ�Ŀո� 
		}
		for(k=i;k>=1;k--)
		{
			if(k!=1)
			{
				printf("* ");
			}
			else
			{
				printf("*");
			}
		} 
		printf("\n");
	}
	return 0;
} 
