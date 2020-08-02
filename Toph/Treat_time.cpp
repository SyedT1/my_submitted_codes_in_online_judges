#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll a,b,c;
void K_KI_KHABE(){
	cin>>a>>b>>c;
	map<ll,string>mp;
	mp[b]="Chocolate";
	mp[c]="Ice-cream";
	cout<<(b<=a && c<=a||a<=b && a<=c?"Chocolate":mp[min(b,c)])<<"\n";
}
int main(){
	K_KI_KHABE();
}
