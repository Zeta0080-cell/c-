//oj�α���ϰ��4-4-��һ��������������� 
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,num,i;
	printf("������һ������Ҫ�����֣�\n");
	scanf("%d",&n);
	do
	{
		num=n%10;
		n=n/10;
		printf("%d",num);
	}
	while(n!=0);
	return 0;
}
