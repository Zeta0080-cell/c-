// ��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������ɼ��̿��ơ�
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n;             
	int a;             
	int sum=0;
	int i;
	int item;           //��ʱ��������a��ֵ 
	scanf("%d",&n);     //��������Ҫ������ĸ���
	scanf("%d",&a);               
	for(i=1;i<=n;i++)
	{
		sum=sum+item;
		item=item*10+a;
	} 
	printf("%d",sum);
	return 0;
}
