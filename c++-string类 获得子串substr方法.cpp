//c++-string�� ����Ӵ�substr���� 
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 	string s = "hello world!";
 	string s_sub=s.substr(2,3);//��ʾ��s�ĵڶ����ַ���ʼ��������ȡ3���ַ� 
	cout << s_sub << endl;
	return 0;
} 
