//����ַ����ͣ�Ҫ���û�����һ���ַ���ͨ��ASCii�����ж�
#include<stdio.h>
int main()
{
	char c;
	printf("������һ����ĸ��");
	scanf("%c",&c);
	if(c>=65&&c<=90)
	{
		printf("�������һ����д��ĸ\n");
	}
	else if(c>=97&&c<=122)
	{
		printf("�������һ��Сд��ĸ\n");
	}
	else if(c>=48&&c<=57)
	{
		printf("�������һ������");
	}
	return 0;
 } 
