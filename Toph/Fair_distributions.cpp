#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll x,y;
void distribute(){
	cin>>x>>y;
	cout<<(y%x?(((y/x)+1)*x)-y:0)<<"\n";
}
int main(){
	distribute();
}
