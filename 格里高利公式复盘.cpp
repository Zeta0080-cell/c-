//���������ʽ���� 
#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
	int flag=1,denominator=1;
	double eps,item=1,pi=0;
	flag=1;
	denominator=1;
	pi=0;
	item=1.0;
	printf("����������Ҫ�ľ��ȣ�\n");
	scanf("%lf",&eps);
	while(fabs(item)>=eps)
	{
		pi=pi+item;
		flag=-flag;
		denominator=denominator+2;
		item=flag*1.0/denominator;
	}
	pi=pi*4;
	printf("pi=%.4f\n",pi);
	return 0;
}
