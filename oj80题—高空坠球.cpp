//�߿�׹��
#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
	double height,i,n,result;
	printf("������С������ĳ�ʼ�߶ȣ�\n");
	scanf("%lf",&height);
	printf("������С����صĴ�����\n");	
	scanf("%lf",&n);
	result=height+height*2*(1-pow(1/2,n));
	printf("%.1f",result);
	return 0;		
} 
