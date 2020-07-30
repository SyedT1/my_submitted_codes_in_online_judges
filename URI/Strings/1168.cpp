#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string k;
ll n,sm,lf[10]={6,2,5,5,4,5,6,3,7,6};
void trio(){
	cin>>k,sm = 0;
	for(char c:k) sm+=(lf[c-'0']);
	cout<<sm<<" leds\n";
}
int main(){
	cin>>n;
	while(n--) trio();
}
