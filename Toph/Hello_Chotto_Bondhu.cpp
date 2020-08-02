#include<bits/stdc++.h>
using namespace std;
using ll  = long long int;
ll n;
string k;
int main()
{
	cin>>n;
	while(n--){
		cin>>k;
		cout<<((k[int(k.size())-1]-'0')*(k[int(k.size())-1]-'0'))%10<<"\n";
	}
}
