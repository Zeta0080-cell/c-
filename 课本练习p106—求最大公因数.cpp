//�������������С������ 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int m,n; //������������
	int zeta; 
	int temp;//����ת��m��n��ֵ 
	scanf("%d %d",&m,&n);
	if(m<n)
	{
		temp=m;
		m=n;
		n=temp;//����m��n��ֵ����ȷ��m��n�� 
	}
	zeta=m%n;
	m=n;
	n=zeta;
	while(zeta!=0)
	{
		m=n;
		n=zeta;
		zeta=m%n;
	}
	printf("%d",m);
	return 0;
}
