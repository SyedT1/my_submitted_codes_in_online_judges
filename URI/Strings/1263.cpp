#include<bits/stdc++.h>
#define pb push_back
using namespace std;
using ll = long long int;
string a,k;
void Trial(string x){
	ll alle = 0,fiq = 0;
	k+=(char(tolower(x[0])));
	for(ll i = 0;i<ll(x.size());i++){
		if(x[i]==' ' && i<ll(x.size()-1)){
			k+=(char(tolower(x[i+1])));
		}
	}
	for(ll i = 0;i<ll(k.size());i++){
		while(k[i]==k[i+1] && i<ll(k.size()-1)){
			fiq++,i++;
			alle+=(fiq==1?1:0);
		}
		fiq = 0;
	}
	cout<<alle<<'\n';
	k.clear();
}
int main(){
	while(getline(cin,a)){
		Trial(a);
	}
}
