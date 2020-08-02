#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,k;
string ysp(ll x){
	return string(x,'y');
}
int main(){
	cin>>n;
	for(ll i = 1;i<=n;i++){
		cin>>k;
		cout<<"Case "<<i<<": Harr"<<ysp(k)<<"! Khelbe Hogwarts, Jitbe Hogwarts!"<<"\n";
	}
}
