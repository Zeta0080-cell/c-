#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int x;//Ҫ�������
	int m,n;//����ƽ����
	int i,j;//���̱���
	for(i=1;i<=168/2;i++)
	{ 
		if(168%i==0)
		{
			j=168/i;
			if((i+j)%2==0&&(i-j)%2==0&&i>j)
			{
				m=(i+j)/2;
				n=(i-j)/2;
				x=n*n-100;
				printf("%d\n",x);
			}
		 } 
	}
	 return 0;
}
