//oj��ϰ��105��
//ʹ�ú���ͳ��ָ�����ֵĸ���
#include<iostream>
#include<cstdio>
using namespace std;
int countdigit(int num,int digit)
{
	int count=0;
	while(num>0)
	{
		if(num%10==digit)
		{
			count++;
		}
		num/=10;
	}
	return count;		
}


int main()
{
	int num,digit;
	printf("����������Ҫ�жϵ����ֺ�λ����\n");
	scanf("%d %d",&num,&digit);	
	printf("%d",countdigit(num,digit));
	return 0;
} 
