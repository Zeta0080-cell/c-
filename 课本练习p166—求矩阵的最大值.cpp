//�α���ϰ������������ֵ���ڵ�λ�� 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#define MAXM 6
#define MAXN 6
using namespace std;
int main()
{
	int col,i,j,m,n,row;
	int a[MAXM][MAXN];
	printf("����������Ҫ�����������������");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);//���û������õ�����ĸ���Ԫ�� 
		}
	}
	row=col=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>a[row][col])
			{
				row=i;
				col=j;
			}
		}
	}
	printf("max=a[%d][%d]=%d\n",row,col,a[row][col]);
	return 0;
}
