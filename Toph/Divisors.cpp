#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll k;
void div(){
	cin>>k;
	for(ll i = 1;i<=k;i++){
		if(k%i==0){
			cout<<i<<"\n";
		}
	}
}
int main(){
	div();
}
