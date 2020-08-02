#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll ak;
int main()
{
	ll a;
	cin>>a;
	for(ll i = 1;i<=a;i++){
	  cin>>ak;
	  cout<<(ak%2?((-1)*((ak+1)/2))+2:(ak/2)*(-1))<<"\n";
	}
}
