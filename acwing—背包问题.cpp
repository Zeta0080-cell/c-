#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=1010;
int n,m;
int f[N][N];
int v[N],w[N];
int main()
{
	cin>>n>>m;
	int i,j;
	for(i=1;i<=n;i++)
		for(j=m;j>=v[i];j--)
			f[j]=max(f[j],f[j-v[i]]+w[i]);
	cout<<f[m]<<endl;
	return 0;
}
