//ѡ������
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int i;
	int index;
	int k;
	int temp;
	int n; 
	int a[20];
	printf("������һ��n����������Ԫ�ظ���");
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
				index=i;
			}
		}
		temp=a[index];
		a[index]=a[k];
		a[k]=temp;
	}
	
	for(i=0;i<n;i++)
	{
		
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
