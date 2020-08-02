#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string k;
void IsPalindrome(){
	cin>>k;
	for(ll i = 0,ks = k.size();i<ks/2;i++){
		if(k[i]!=k[ks-(i+1)]){
			cout<<"No\n";
			return;
		}
	}
	cout<<"Yes\n";
}
int main(){
	IsPalindrome();
}
