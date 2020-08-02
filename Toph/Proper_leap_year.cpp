#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n;
void lp_yr(){
	cin>>n;
	if(n%400==0){
		cout<<"Yes\n";
		return;
	}
	else if(n%4==0 && n%100!=0){
		cout<<"Yes\n";
		return;
	}
	cout<<"No\n";
}
int main(){
	lp_yr();
}
