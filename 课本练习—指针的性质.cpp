#include<stdio.h>
#include<math.h>
int main()
{
	int m=1;
	int *p=&m;
	int *q;
	q=p;//��Ϊ��ʱp��q��ָ��m�ĵ�ַ 
	*q=2;//�˴��޸�q��ָ��ĵ�ַ��ֵ����m��ֵ 
	printf("%d",*p);//p��q��ָ��m�ĵ�ַ����m��ֵ�Ѿ����޸ģ���pָ��ĵ�ַ��ֵҲ�ᱻ�޸� 
	return 0; 
}

