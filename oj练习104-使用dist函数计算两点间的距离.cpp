//oj�α���ϰ��ʹ�ú������������ľ��� 
//���󣺸���ƽ���������������꣨x1��y1������x2��y2������������֮��ľ��� 
#include<stdio.h>
#include<math.h>
double dist(double x1,double y1,double x2,double y2)
{
	double result;
	result= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return result;	
}

int main()
{
	double x1,x2,y1,y2,sum;
	printf("�������һ��������꣺\n");
	scanf("%lf %lf",&x1,&y1);
	printf("������ڶ���������꣺\n");
	scanf("%lf %lf",&x2,&y2);
	sum=dist(x1,y1,x2,y2);	
	printf("%.2f",sum);
	return 0;	
} 
