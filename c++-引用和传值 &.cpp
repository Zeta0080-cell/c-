//c++-���úʹ�ֵ &
//����&��ȡ��ַ��û�а�ëǮ��ϵ 
#include<iostream>
#include<algorithm>
using namespace std;

void c(int &a)
{
	a+=1;
}
int main()
{
	int n=3;
	c(n);//ֱ�ӵ���void��������Ϊֱ�Ӵ��ĵ�ַ������Ҫ���������ܸı���ֵ 
	cout<< n <<endl;
	return 0;
}
