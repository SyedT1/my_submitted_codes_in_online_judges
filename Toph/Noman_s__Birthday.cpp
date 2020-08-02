#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n;
bool bon(string s,ll x)
{
	for(ll i = 0;i<x-1;i++){
		if(s[i]==s[i+1]){
			return 0;
		}
	}
	return 1;
}
int main()
{
	cin>>n;
	string moza;
	cin>>moza;
	cout<<(bon(moza,n)?"No change needed":"Change needed")<<"\n";
	return 0;
}
