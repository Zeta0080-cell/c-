//Ͱ����-level2 (���ظ�Ԫ��) 
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[101];
int main()
{
	int n,tmp;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>tmp;
		a[tmp]++;
	}
	for(int i=1;i<=101;i++)
	{
		if(a[i]!=0)
		{
			for(int j=1;j<=a[i];j++)
			{
				printf("%d ",i);
			}//��Ƕ��һ��ѭ������������ظ������� 
		}
	}
	return 0;
}


