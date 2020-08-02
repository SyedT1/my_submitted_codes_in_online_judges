#include<bits/stdc++.h>
#define pb push_back
#define pp pop_back
using namespace std;
using ll = long long int;
typedef vector<string> vs;
ll n,mx = 0;
string modif(string x){
	ll cho[140]={};
	for(char c:x){
		cho[int(c)]++;
	}
	if(cho[int('a')]&1){
		if(cho[int('a')]==1){
			x+='a';
		}
		else{
			x.pp();
		}
	}
	return x;
}
string spc(ll xi){
	string k(xi,' ');
	return k;
}
void Goat_Re(){
    cin>>n;
    vs vo(n);
    for(string &i : vo){
    	cin>>i;
    	i = modif(i);
    	mx = max(mx,ll(i.size()));
    }
    for(string i : vo){
    	cout<<spc((mx-i.size())/2)<<i<<"\n";
    }
}
int main(){
	Goat_Re();
}
