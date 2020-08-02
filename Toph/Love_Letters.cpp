#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,s;
string k;
bool isprime(ll f){
	for(ll i = 2;i*i<=f;i++){
		if(f%i==0){
			return 0;
		}
	}
	return f==1?0:1;
}
void Love(ll x){
	set<char>po;
	ll So[140]={},co=0;
	cin>>s>>k;
	cout<<"Case "<<x<<":\n";
	for(char c:k){
		po.insert(c);
		So[int(c)]++;
	}
	for(char c:po){
	   if(isprime(So[int(c)])){
	   	 cout<<c<<" = "<<So[int(c)]<<"\n";
	   	 co++;
	   }
	}
	if(co==0){
		cout<<"Love is painful !\n";
	}
}
int main(){
	cin>>n;
	for(ll i = 1;i<=n;i++){
		Love(i);
	}
}
