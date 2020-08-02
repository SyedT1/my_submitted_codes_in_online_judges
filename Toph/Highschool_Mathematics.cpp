#include<bits/stdc++.h>
using namespace std;
using lo = unsigned long long int;
int main(){
	lo a,m,n,r;
	cin>>a>>m>>n;
	r = m+n;
	cout<<((m*a)/r)<<" "<<((n*a)/r)<<"\n";
}
