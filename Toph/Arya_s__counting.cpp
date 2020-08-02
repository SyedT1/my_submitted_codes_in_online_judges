#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,a,b,c;
void Aly(ll x){
	cin>>a>>b>>c;
	cout<<"Case "<<x<<": "<<(a>b && a>c?"A":(b>c && b>a?"B":(c>a && c>b?"C":"Confused")))<<"\n";
}
int main(){
	cin>>n;
	for(ll i = 1;i<=n;i++){
		Aly(i);
	}
}
