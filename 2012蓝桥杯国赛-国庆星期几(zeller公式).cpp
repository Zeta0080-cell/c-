//2012���ű�����-�������ڼ�(zeller��ʽ)
//zeller��ʽ���ڼ���������������ڼ� 
#include <bits/stdc++.h>//����ͷ�ļ� 
using namespace std;
int zeller(int year,int month,int day)//������������� 
{
    if (month < 3) 
	{
        month += 12;
        year -= 1;
    }
    int h = (day + (13 * (month + 1)) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    return (h + 5) % 7 + 1; // ת��Ϊ1-7��ʾ����һ��������
}

int main()
{
    int count = 0;

    for (int year = 1949; year <= 2012; ++year) 
	{
        if (zeller(year, 10, 1) == 7) 
		{ //7���������� 
            ++count;
        }
    }
    std::cout << "��1949�굽2012�꣬������������յĴ���: " << count << std::endl;
    return 0;
}
