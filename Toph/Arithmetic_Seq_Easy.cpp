#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,k,s;
void find_(){
	cin>>n>>k;
	n = (n*(n+1))/2;
	while(k--){
		cin>>s,n-=s;
	}
	cout<<n<<"\n";
}
int main(){
	find_();
}
