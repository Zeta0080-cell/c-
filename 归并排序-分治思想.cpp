//�鲢���򡪷���˼��
//�鲢�����ȵݹ鴦�������������䣬Ȼ����������ϲ� 
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int N=1e6+10;
int q[N];
int tmp[N];//����ĸ������飬�����洢��� 
void merge_sort(int q[],int l,int r)
{
	int mid,k;//������е�
	int i,j;
	mid=(l+r)/2; 
	if(l>=r)
	{
		return;//��������������� 
	}
	merge_sort(q,l,mid);
	merge_sort(q,mid+1,r);//�ȵݹ鴦���������� 
	//���Ź鲢��Ҳ�����鷳��һ���� 
	i=l;//��ָ������ 
	j=mid+1;//��ָ������
	while(i<=mid&&j<=r)
	{
		if(q[i]<=q[j])
		{
			tmp[k++]=q[i++];	
		}	
		else
		{
			tmp[k++]=q[j++];
		}
	} 
	for(i=l,j=0;i<=r;i++,j++)
	{
		q[i]=tmp[j];
	}
}
int main()
{
	int n;//��Ҫ��������ָ���
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&q[i]);	
	} 
	merge_sort(q,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",q[i]);
	}
	return 0;
}
