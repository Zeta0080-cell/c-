//���α�������-������ 
#include<iostream>
#include<algorithm>
#include<string>
#include <cstdlib>  // ������������
#include <cmath>    // ���ڸ���������
using namespace std;

int main()
{
	int i,j;//�ֱ�����������õ�����
	int flag;
	flag=fabs(i-j);
	for(int i=1;i<30;i++)
	{
		for(int j=1;j<30;j++)
		{
			if(i<j&&i*j==(i+j)*6&&(j-i)<=8)
			{
				cout<<i<<" "<<j<<endl;
			}
		}
	}
	return 0;
} 
