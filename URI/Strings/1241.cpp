#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll t;
string x,y;
bool Fit_or_not(string a,string b){
	if(!(ll(a.size())>=ll(b.size()))){
		return false;
	}else{
		for(ll i = ll(b.size()-1),j = ll(a.size()-1);i>=0;i--,j--){
			if(b[i]!=a[j]){
				return false;
			}
		}
	}
	return true;
}
int main(){
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for getting output from output.txt
	freopen("output1.txt", "w", stdout);
#endif
	cin>>t;
	while(t--){
		cin>>x>>y;
		cout<<(Fit_or_not(x,y)?"encaixa":"nao encaixa")<<'\n';
	}
}
