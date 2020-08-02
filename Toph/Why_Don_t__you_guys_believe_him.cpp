#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,k,m,sm=0;
int main(){
	cin>>n>>k;
	while(n--){
		cin>>m,sm+=m;
	}
	cout<<(sm>k?"Yes":"No")<<"\n";
	return 0;
}
