//��������-����˼�� 
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int N=1e6+10;
int n;
int q[N];
void quick_sort(int q[],int l,int r)
{
	int x,i,j;//xΪ����ķֽ��
	x=q[(l+r)/2];//x��ȡֵ�������� 
	if(l>=r)
	{
		return;//��������Ͳ��������� 
	}
	//�����������������Ҫ�õ���������ָ�룬�ֱ���i��j
	i=l-1;
	j=r+1;//��Ϊ���ǵ�����ָ����Ҫÿ�������м��ƶ�һ�����жϣ�����Ӧ���ȸ�һ��ƫ����
	while(i<j){
		//ȷ���߽�����
		do{
			i++;
		} while(q[i]<x);
		do{
			j--;
		}while(q[j]>x);
		//����doѭ������ȷ��ָ�����ŵ㣬���ҽ���
		if(i<j)
		{
			swap(q[i],q[j]);	
		} 
	} 
	quick_sort(q,l,j);
	quick_sort(q,j+1,r);
}
int main()
{
	scanf("%d",&n);//������Ҫ���������n 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&q[i]);//����Ҫ��������ִ������� 
	}
	quick_sort(q,0,n-1);//����l��r�ֱ�������ֵ������߽�
	for(int i=0;i<n;i++)
	{
		printf("%d ",q[i]);	
	} 
	return 0;
}
