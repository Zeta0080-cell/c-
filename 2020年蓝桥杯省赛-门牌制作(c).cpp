//2020�����ű�ʡ��-��������(c)
#include<stdio.h>
int main()
{
	int i,num,count=0;
	for(i=0;i<=2020;i++)
	{
		num=i;
		while(num)//��num��ֵ��Ϊ0��ʱ��һֱѭ��
		{
			if(num%10==2)
			{
				count++;
			}
			num/=10;//����	
		} 
	}
	printf("%d",count);
	return 0;
}
