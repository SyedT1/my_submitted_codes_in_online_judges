#include<bits/stdc++.h>
#define all(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
typedef vector<ll> vi;
ll n,k;
void find_max(){
	cin>>n>>k;
	vi vo(n);
	for(ll &i:vo){
		cin>>i;
	}
	sort(all(vo));
	reverse(all(vo));
	cout<<vo[k-1]<<"\n";
}
int main(){
	find_max();
}
