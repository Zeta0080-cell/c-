//���õݹ���5�Ľ׳�
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int digui(int n)
{
	 if (n == 1)  // �ݹ���ֹ����
    {
        return 1;
    }
    return n * digui(n - 1);  // �ݹ����
}
int main()
{
	int result;
	result=digui(5);
	printf("%d",result);
	return 0;
}

