#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("����������Ҫ�����е�λ����");
	scanf("%d",&n);
	int son=1;
	int mum=1;
	int i;
	double item,sum=0;
	item=son*1.0/mum;
	for(i=1;i<=n;i++)
	{
		sum=sum+item;
		mum=mum+1;
		item=son*1.0/mum;
	}
	printf("%f",sum);
	return 0;
}
//ע�⾫�ȵ����� 
