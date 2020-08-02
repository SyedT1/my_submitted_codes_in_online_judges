//ution.cpp 248B
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n;
string k;
void sypy()
{
	cin>>k;
	string ki;
	for(ll i = (k.size()/2)-1;i>=0;i--){
		ki += k[i];
	}
    cout<<ki<<"\n";
}
int main()
{
	cin>>n;
	while(n--){
		sypy();
	}
}
