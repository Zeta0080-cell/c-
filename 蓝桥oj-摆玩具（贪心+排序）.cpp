#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,sum=0;
	int a[10000005];
	int b[10000005]; 
	scanf("%d %d",&n,&k);//�����ߵĸ����Լ����������
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//����������	
	} 
	for(int i=1;i<n;i++)
	{
		b[i-1]=a[i]-a[i-1];//��ü������� 
	}
	sort(b,b+n-1);//�Լ�������������� 
	for(int i=0;i<n-k;++i)
	{
		sum+=b[i];
	}
	printf("%d",sum);
	return 0;
}
