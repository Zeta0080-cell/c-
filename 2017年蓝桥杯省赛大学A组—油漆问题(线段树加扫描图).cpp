//2017�����ű�ʡ����ѧA�顪��������(�߶�����ɨ��ͼ)
#include<bits/stdc++.h>
using namespace std;
#define MAXN 100010
typedef long long ll;
ll x1,x2,h1,h2,dis[MAXN*2],val[MAXN*2],ans;
int n,tot,maxn=(1<<30)-1;
/*-------------------------------------��ʼ��------------------------------------*/
struct scanline{
	ll x,lh,rh;
	int d;
}a[MAXN];
bool cmp(scanline a,scanline b){							// ɨ���ߵıȽϺ��� 
	if(a.x!=b.x)return a.x<b.x;								// ����x������� 
	return a.d>b.d;											// ����d=1����d=-1����� 
}
/*-----------------------------------�߶�������-----------------------------------*/ 
struct SegmentTree{
	int l,r,dat,cnt;
}t[MAXN*4];
inline void update(int p){									// �������ϸ��½ڵ� 
	if(t[p].l==maxn&&t[p].r==maxn)return; 
	if(t[p].cnt)t[p].dat=val[t[p].r+1]-val[t[p].l];			// ������ʱ�������ҽڵ�֮�� 
	else t[p].dat=t[p*2].dat+t[p*2+1].dat;					// δ������������ӽڵ㸲�ǳ���֮�� 
}
void build(int p,int l,int r){
	t[p].l=l;t[p].r=r;
	t[p].dat=0;t[p].cnt=0;
	if(l==r)return;
	int mid=(l+r)/2;
	build(p*2,l,mid);
	build(p*2+1,mid+1,r);
}
void add(int p,int l,int r,int d){
	if(l<=t[p].l&&r>=t[p].r){
		t[p].cnt+=d;
		update(p);
		return;
	}
	int mid=(t[p].l+t[p].r)/2;
	if(l<=mid)add(p*2,l,r,d);
	if(mid<r)add(p*2+1,l,r,d);
	update(p);
}
/*-------------------------------------������---------------------------------------*/ 
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld%lld%lld%lld",&x1,&h1,&x2,&h2);
		a[i*2-1].lh=a[i*2].lh=h1;
		a[i*2-1].rh=a[i*2].rh=h2;
		a[i*2-1].x=x1;a[i*2].x=x2;
		a[i*2-1].d=1;a[i*2].d=-1;
		dis[++tot]=h1;dis[++tot]=h2;						// dis����������ɢ�� 
	}
	sort(dis+1,dis+n*2+1);
    int cnt=unique(dis+1,dis+n*2+1)-dis-1;
	for(int i=1;i<=n*2;i++){								// ��ɢ������ 
		int pos1=lower_bound(dis+1,dis+cnt+1,a[i].lh)-dis;	
		int pos2=lower_bound(dis+1,dis+cnt+1,a[i].rh)-dis;
		val[pos1]=a[i].lh;val[pos2]=a[i].rh;
		a[i].lh=pos1;maxn=max(maxn,pos1);a[i].rh=pos2;		// ����ɢ�����ֵ����ɨ����
	}
	sort(a+1,a+n*2+1,cmp);									// ��ɨ���ߴ��������� 
	build(1,1,n*2);
	for(int i=1;i<=n*2;i++){
		add(1,a[i].lh,a[i].rh-1,a[i].d);
		ans+=(a[i+1].x-a[i].x)*(t[1].dat);
	}
	printf("%lld",ans);
	return 0;
} 
