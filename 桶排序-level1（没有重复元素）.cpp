//Ͱ����-level1(û���ظ�Ԫ��) 
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[11];//�±����ÿ��Ͱ�ϵı�ǩ 
int main()
{
	int n;
	int tmp;//���tmp�ǳ���������ÿ���ݴ������ 
	cin>>n;
	for(int i=1;i<n+1;i++)
	{
		cin>>tmp;
		a[tmp]++;
	}  
	for(int i=1;i<11;i++)//i����Ͱ�����������
	{
		if(a[i]!=0)
		{
			printf("%d ",i);	
		}	
	} 
	return 0;
}
