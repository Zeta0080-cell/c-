//����oj2023ʡ��-�׳���� 
#include <iostream>
using namespace std;
int main() 
{
    long long sum=1,ans=0;
    for(int i=1;i<=39;i++)//ֻ�ü��㵽39����Ϊ�Ѿ��о�λ
    {
        sum*=i;
        sum%=1000000000;
        ans+=sum;
    }
    cout<<ans%1000000000;
    return 0;
}
