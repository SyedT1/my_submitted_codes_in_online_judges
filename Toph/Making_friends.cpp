#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll k,d=0;
void div(){
	cin>>k;
	for(ll i = 1;i<k;i++){
		d+=(k%i?0:1);
	}
	cout<<d<<"\n";
}
int main(){
	div();
}
