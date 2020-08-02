#include<bits/stdc++.h>
using namespace std;
using ll  = long long int;
ll n,k,nok[101]={},nm;
int main()
{
	cin>>n;
	while(n--){
		cin>>k,nok[k]++;
	}
    ll uniq = 0;
	for(ll i = 0;i<11;i++){
		if(nok[i]==1){
			uniq++;
			nm=i;
		}
	}
	if(uniq==1){
		cout<<nm<<"\n"<<"Nusrat weds Kadzz!\n";
	}
	else{
		cout<<"Sorry Kadzz!\n";
	}
}
