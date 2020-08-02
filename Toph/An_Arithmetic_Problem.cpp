#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,a,b,c,k;
int main(){
	cin>>n;
	for(ll i = 1;i<=n;i++){
		cin>>a>>b>>c>>k;
		cout<<"Case "<<i<<": ";
		if(b-a!=c-b){
			cout<<"Error\n";
			continue;
		}
		else{
			cout<<a+(k-1)*(c-b)<<"\n";
		}
	}
}
