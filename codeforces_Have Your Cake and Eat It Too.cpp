#include<bits/stdc++.h>
#define int long long
using namespace std;
int tt;
const int N=2e5+100;
int a[N],b[N],c[N];//ԭ���� 
int d[N],e[N],f[N];//ǰ׺������ 
int n;
int la,ra,lb,rb,lc,rc;//a,b,c���Ե���ʼ�ͽ����±� 
void write()
{
	cout<<la<<" "<<ra<<" "<<lb<<" "<<rb<<" "<<lc<<" "<<rc<<endl;//����� 
}
inline void Solve()
{
	d[0]=0,e[0]=0,f[0]=0;//��ʼ��ǰ׺������ 
	cin>>n;
	int tot=0;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];tot+=a[i];
		d[i]=d[i-1]+a[i];//����ǰ׺�� 
	}
	int t=ceil((1.0*tot)/3);
	for (int i=1;i<=n;i++)
	{
		cin>>b[i];
		e[i]=e[i-1]+b[i];
	}
	for (int i=1;i<=n;i++)
	{
		cin>>c[i];
		f[i]=f[i-1]+c[i];
	}
	
	la=1,ra=lower_bound(d+1,d+1+n,t)-d;//��1����� 
	lb=ra+1,rb=lower_bound(e+lb,e+1+n,t+e[ra])-e;
	lc=rb+1,rc=n;

	if (f[rc]-f[lc-1]>=t)
	{
		if (lc<=n&&lb<=n)
		{
			write();return ;//���������������������� 
		}//Tip:һ��Ҫ�����ţ������������ǰ���� 
	}
	
	
	lb=1,rb=lower_bound(e+1,e+1+n,t)-e;//��2����� 
	la=rb+1,ra=lower_bound(d+la,d+1+n,t+d[rb])-d;
	lc=ra+1,rc=n;
	
	if (f[rc]-f[lc-1]>=t)
	{
		if (lc<=n&&la<=n)
		{
			write();
			return ;
		}
	}
	
	
	lc=1,rc=lower_bound(f+1,f+1+n,t)-f;//��3����� 
	la=rc+1,ra=lower_bound(d+la,d+1+n,t+d[rc])-d;
	lb=ra+1,rb=n;
	if (e[rb]-e[lb-1]>=t)
	{
		if (lb<=n&&la<=n)
		{
			write();
			return ;
		}
	}
	

	
	la=1,ra=lower_bound(d+1,d+1+n,t)-d;//��4�����
	lc=ra+1,rc=lower_bound(f+lc,f+1+n,t+f[ra])-f;
	lb=rc+1,rb=n;
	if (e[rb]-e[lb-1]>=t)
	{
		if (lb<=n&&lc<=n)
		{
			write();
			return ;
		}
	}
	
	
	lb=1,rb=lower_bound(e+1,e+1+n,t)-e;//��5�����
	lc=rb+1,rc=lower_bound(f+lc,f+1+n,t+f[rb])-f;
	la=rc+1,ra=n;
	if (d[ra]-d[la-1]>=t)
	{
		if (la<=n&&lc<=n)
		{
			write();return ;
		}
	}

	lc=1,rc=lower_bound(f+1,f+1+n,t)-f;//��6�����
	lb=rc+1,rb=lower_bound(e+lb,e+1+n,t+e[rc])-e;
	la=rb+1,ra=n;
	if (d[ra]-d[la-1]>=t)
	{
		if (la<=n&&lb<=n)
		{
			write();return ;
		}
	}

	cout<<-1<<endl;//�������������������-1 
	return ;
 } 
signed main()
{
	cin>>tt;
	for (int j=1;j<=tt;j++)
	{
		Solve();
	}
	return 0;
 }
