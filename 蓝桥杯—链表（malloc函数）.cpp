//���ű�������malloc������  
//malloc�����������Ǵ��ڴ����������ָ���ֽڴ�С���ڴ�ռ�
//malloc�����ķ���������void*���͡�void*��ʾδȷ����ָ������� 
#include<stdio.h>
#include<stdlib.h>//���ͷ�ļ������malloc���� 
int main()
{
	int *p;//����һ��ָ��
	p=(int *)malloc(sizeof(int));//ָ��p��ȡ��̬������ڴ�ռ�ĵ�ַ
	*p=10;// ��ָ��p��ָ��Ŀռ���ڴ�������10
	printf("%d",*p);//���ָ��p��ָ���ڴ��ֵ 
	return 0;	
} 
