olution.cpp 327B
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n;
ll bten(ll x){
	ll s = 0;
	while(x){
		s+=(x%2?1:0);
		x/=2;
	}
	return s;
}
void bit_rep(){
   cin>>n;
   ll bt = bten(n);
   for(ll i = 0;i<=n;i++){
   	 if(bten(i)==bt){
   	 	cout<<i<<"\n";
   	 	return;
   	 }
   }
}
int main(){
	bit_rep();
}
