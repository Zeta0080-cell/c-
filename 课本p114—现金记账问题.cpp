//���ú���ʵ���ֽ���� 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
double cash; 
void income(double number)
{
	cash=cash+number;
}
void expend(double number)
{
	cash=cash-number;
}
int main()
{
	int choice;
	double value;
	cash=0;
	scanf("%d",&choice);
	while(choice!=0)
	{
		if(choice==1||choice==2)
		{
			printf("��������:\n");
			scanf("%lf",&value);
			if(choice==1)
			{
				income(value);
			}
			else
			{
				expend(value);
			}
		}
		printf("%.2f\n",cash);
	}
	scanf("%d",&choice);
	return 0;
}
