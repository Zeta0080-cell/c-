//�α���ϰ�����ֲ����㷨 
//���ֲ��ҵĹؼ������ҵ���߽���ұ߽磬Ȼ��ȡ���������ֵ��м����
//mid����Ϊ��߽���ұ߽���м���� 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int low=0,high=9,mid,n=10,x;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	printf("������������ҵ����֣�");
	scanf("%d",&x);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(x==a[mid])
		{
			printf("%d",x);
			break;
		}
		else if(x<a[mid])
		{
			high=mid-1;
		}
		else if(x>a[mid])
		{
			low=mid+1;
		}
	}
	if(low<=high)
	{
		printf("Inedex is %d\n",mid);
	}
	else
	{
		printf("Not found");
	}
	return 0;
}
