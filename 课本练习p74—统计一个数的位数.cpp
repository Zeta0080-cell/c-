//ͳ��һ������λ�� 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int count=0,n;
	printf("����������ͳ�Ƶ�����:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;	
	}	
	printf("%d",count);
	return 0;
}
