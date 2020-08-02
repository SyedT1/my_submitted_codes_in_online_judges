#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,mx=0,k;
void maxim(){
	cin>>n;
	while(n--){
		cin>>k,mx=max(mx,k);
	}
	cout<<mx<<"\n";
}
int main(){
	maxim();
}
