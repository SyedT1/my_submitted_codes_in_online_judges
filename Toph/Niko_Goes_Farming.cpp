#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,k;
void por(){
	cin>>k;
	k = (k/2)/2;
	cout<<k*k<<"\n";
}
int main(){
	cin>>n;
	while(n--){
		por();
	}
}
