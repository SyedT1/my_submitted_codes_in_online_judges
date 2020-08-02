//n.cpp 317B
#include<bits/stdc++.h>
#define sp(a) fixed<<setprecision(a)
using namespace std;
using ll = long long int;
ll n,k;
double kn,sm;
void calc(ll x)
{
	cin>>k,sm=0;
	for(ll j = 1;j<=k;j++){
		cin>>kn,sm+=kn;
	}
	cout<<"Case "<<x<<": "<<sp(3)<<sm/k<<"\n";
}
int main()
{
	cin>>n;
	for(int i = 1;i<=n;i++){
		calc(i);
	}
}
