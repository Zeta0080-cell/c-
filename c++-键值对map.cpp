//c++-��ֵ��map 
#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main()
{
	map <string,int> m;//�����ֵ�ԣ�����������
	m["hello"]=2;
	m["world"]=3;
	cout << "hello:"<<m["hello"]<<endl;
	return 0;
}
