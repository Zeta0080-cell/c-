//oj��94�⡪ʹ�ú������ˮ�ɻ��ĸ��� 
#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int Zeta(int n)
{
	int digit,sum=0,flag,origin;
	origin=n;
	do
	{
		digit=n%10;	
		sum=sum+pow(digit,3);
		n/=10;
	}while(n!=0);
	if(sum==origin)
	{
		flag=1;
	}
	else
	{
		flag=0;
	}
	return flag;
}
int main()
{
	int m,n,i;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(Zeta(i)==1)
		{
			printf("%d ",i);
		}
	}
	return 0;	
}
