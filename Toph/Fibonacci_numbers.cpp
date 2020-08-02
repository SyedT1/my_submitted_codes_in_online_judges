#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n;
void fibo(){
	cin>>n;
	ll fib[n<2?2:n+1]={};
	fib[0]=0,fib[1]=1;
	for(ll i = 2;i<=n;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	cout<<fib[n]<<"\n";
}
int main(){
	fibo();
}
