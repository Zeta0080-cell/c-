//һԪǮ�Ķһ���ʽ
//�����������оٳ����н�һԪǮ�һ���1�ǡ�2�ǻ�5�ǵĿ���
//˼·��ʹ��ѭ��Ƕ�׵���ٷ����г��ý���������������ó�������� 
#include<stdio.h>
int main()
{
	printf("����Ϊ���еĽ��������\n");
	int one,two,five,i;
	for(one=0;one<=10;one++)
	   for(two=0;two<=5;two++)
	      for(five=0;five<=2;five++)
	        {
	        	if(one*1+two*2+five*5==10)
	        	{
	        		printf("%d %d %d\n",one,two,five);
				}
			}
	return 0;
 } 
