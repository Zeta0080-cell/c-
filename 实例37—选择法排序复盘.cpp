//ѡ�����򡪵ڶ�����ϰ
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,k,j,index,temp;
	int a[20];
	printf("�����������е�Ԫ�أ�");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(k=0;k<n-1;k++)
	{
		index=k;
		for(j=k+1;j<n;j++)
		{
			if(a[j]<a[index])
			{
				index=j;
			}
		}
		temp=a[index];
		a[index]=a[k];
		a[k]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
} 
