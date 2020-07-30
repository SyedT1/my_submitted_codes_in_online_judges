#include<bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
using namespace std;
using ll = long long int;
ll sq(ll a,ll b)
{
	return (a*b)*(a*b);
}
void go(ll x,ll y)
{
	pair<ll,string>po[3];
	po[0]=mp(sq(3,x)+(y*y),"Rafael ganhou");
	po[1]=mp((2*(x*x))+sq(5,y),"Beto ganhou");
	po[2]=mp((-100*x)+(y*y*y),"Carlos ganhou");
	sort(po,po+3);
	cout<<po[2].se<<"\n";
}
int main()
{
	ll n,x,y;
	cin>>n;
	while(n--){
		cin>>x>>y;
		go(x,y);
	}
}
