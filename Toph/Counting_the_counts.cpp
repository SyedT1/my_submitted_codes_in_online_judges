#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,k,le=0;
void K_K_PAISE(){
	cin>>n;
	while(n--){
		cin>>k,le+=(k>=80?1:0);
	}
	cout<<le<<"\n";
}
int main(){
	K_K_PAISE();
}
