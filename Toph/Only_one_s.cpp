#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,k;
void addup(){
	cin>>n>>k;
	stringstream add;
	add<<n*k;
	string s = add.str(),k;
	for(ll i = 0;i<s.size();i++){
		k = to_string(int(s[i]-'0')+1)+k;
	}
	cout<<k<<"\n";
}
int main(){
	addup();
}
