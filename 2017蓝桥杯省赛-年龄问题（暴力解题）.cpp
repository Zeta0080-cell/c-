//2017���ű�ʡ��-�������⣨�������⣩ 
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//��������������������
bool isUnique(long long int n1,long long int n2)
{
	string s=to_string(n1)+to_string(n2);//�ַ���ƴ��
	if(s.length()!=10)
	{
		return false;//���Ȳ���10ֱ�ӷ��� 
	}
	sort(s.begin(),s.end());//����������
	for(int i=0;i<10;i++)
	{
		if(s[i]!= '0' + i)
		{
			return false;
		}	
	} 
	return true;
}


int main()
{
	long long int cube,fourth;
	for(int i=10;i<30;i++)
	{
		cube = i*i*i;
		fourth = i*i*i*i;
		if(cube>=1000&&cube<10000&&fourth>=100000&&fourth<1000000)
		{
			if(isUnique(cube,fourth))
			{
				cout<<i<<" "<<cube<<" "<<fourth<<endl;
			}
		}
	}
	return 0;
}
