#include<bits/stdc++.h>
using namespace std;
using ll =  long long int;
ll n,si,pn = 0;
bool prime(ll x){
	for(ll i = 2;i*i<=x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return x==1?0:1;
}
void Team_Form(){
	cin>>n;
	for(ll xi = 1;xi<=n;xi++){
		cin>>si,pn+=(prime(si)?1:0);
	}
	cout<<(pn<=n-pn?pn:(n-pn)+((pn-(n-pn))/2))<<"\n";
}
int main(){
	Team_Form();
}
