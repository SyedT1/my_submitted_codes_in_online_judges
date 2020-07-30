#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
double k;
int main()
{
	ll n,s=0;
	cin>>n;
	while(n--){
		cin>>k;
		for(double ko = k;ko>1.0;ko/=2){
			s++;
		}
		cout<<s<<" dias\n";
		s = 0;
	}
}
