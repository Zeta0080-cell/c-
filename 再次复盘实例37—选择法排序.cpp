#include<stdio.h>
int main()
{
	int index,i,k,temp;
	int a[20]; 
	int n;//��������Ԫ�صĸ���
	printf("����������Ԫ�صĸ�����");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=0;k<n-1;k++)
	{
		index=k;
		for(i=k+1;i<n;i++)
		{
			if(a[i]<a[index])
			{
				index=i;//���������index��������Ϊi��ֵ�ڲ��ϱ仯�������������������λ	
			}	
		}	
		temp=a[index];
		a[index]=a[k];
		a[k]=temp;
	} 
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
