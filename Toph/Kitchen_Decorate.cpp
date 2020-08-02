#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using lo = unsigned long long int;
ll n;
void mx(){
	lo a,b;
	cin>>a>>b;
	if(b<a){
		swap(a,b);
	}
	cout<<__gcd(a,b)<<"\n";
}

int main(){
	cin>>n;
	while(n--){
		mx();
	}
}
