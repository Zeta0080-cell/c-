//���õݹ麯������෴�ַ���
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	char zeta[20];
	int i=0;
	int k;
	while((zeta[i]=getchar())!='\n')//ע���������ȼ������� 
	{
		i++;	
	}	
	zeta[i]='\0';     //��ĩβ�������Ľ����� 
	k=i-1;
	for(k=i-1;k>=0;k--)   //��ʱi��ֵ��λ������ĩβ������ֱ��ʹ�� 
	{
		printf("%c",zeta[k]);
	}
	return 0;
} 
