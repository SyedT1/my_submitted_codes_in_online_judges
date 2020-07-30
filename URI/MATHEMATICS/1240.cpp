#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string k,o;
string seeif(string x,string y){
	if(y.size()>x.size()){
		return "nao encaixa";
	}
	else{
		for(ll i = y.size()-1,bx=x.size()-1;i>=0;i--,bx--){
			if(x[bx]!=y[i]){
				return "nao encaixa";
			}
		}
		return "encaixa";
	}
}
int main()
{
	ll n;
	cin>>n;
	while(n--){
		cin>>k>>o;
		cout<<seeif(k,o)<<"\n";
	}
}
